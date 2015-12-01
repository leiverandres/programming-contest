#include <bits/stdc++.h>
#define LIM 100006
//http://lightoj.com/volume_showproblem.php?problem=1114
using namespace std;

string convert(string &s) {
	string x = s;
	sort(x.begin()+1, x.end()-1);
	return x;
}

struct Trie {
	struct Node {
		int edges[65];
		int c;
	};

	Node nodes[LIM];
	int tot_nodes;

	void clear() {
		memset(nodes[tot_nodes].edges, -1, sizeof(nodes[tot_nodes].edges));
		nodes[tot_nodes].c = 0;
		tot_nodes++;
	}

	void init() {
		tot_nodes = 0;
		clear();
	}

	int query(string &s, bool a) {
		int root = 0;
		for (int i = 0; i < s.size(); ++i) {
			int id = s[i] - 'A';
			if(nodes[root].edges[id] == -1) {
				if(!a) return 0;
				nodes[root].edges[id] = tot_nodes;
				clear();
			}
			root = nodes[root].edges[id];
		}
		if(a) nodes[root].c++;
		return nodes[root].c;
	}
};

int next_int() {
	string buffer;
	getline(cin, buffer);
	return atoi(buffer.c_str());
}

Trie tree;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int cases, n, lista; 
	cases = next_int();
	for (int caso = 0; caso < cases; ++caso)
	{
		n = next_int();
		tree.init();
		string tmp;
		while (n--) {
			getline(cin, tmp);
			if(tmp.size() > 2) tmp = convert(tmp);
			tree.query(tmp, true);
		}
		lista = next_int();
		int ans = 1;//aunque sea la palabra misma
		
		printf("Case %d:\n", caso+1);
		while(lista--) {
			ans = 1;//cada palabra tiene un numero dist
			string aux;
			getline(cin, aux);
			stringstream ss(aux);
			while(ss >> aux) {
				if(aux.size() > 2) aux = convert(aux);
				ans *= tree.query(aux, false);
			}
			printf("%d\n", ans);
		}
	}
	return 0;
}