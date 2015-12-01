#include <bits/stdc++.h>
#define MAX 100009
using namespace std;

struct Trie{
	struct Node{
		int numbers[10];
		int c;
	};

	Node nodes[MAX];
	int sz;//numero de nodos

	void clear(){
		memset(nodes[sz].numbers, -1, sizeof(nodes[sz].numbers));
		nodes[sz].c = 0;
		sz++;
	}

	void init(){
		sz = 0;
		clear();
	}

	bool insert(string &s){
		int root = 0;
		bool check = true;
		for (int i = 0; i < s.size(); ++i)
		{
			int id = s[i] - '0';
			if(nodes[root].numbers[id] == -1){
				nodes[root].numbers[id] = sz;
				clear();
			}
			root = nodes[root].numbers[id];
			if(nodes[root].c) check = false;
		}
		nodes[root].c++;

		for(int i = 0; i < 10; ++i) 
			check = check && (nodes[root].numbers[i] == -1);
		
		return check;
	}

};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Trie tree;
	int cases; cin>>cases;
	for (int caso = 0; caso < cases; ++caso)
	{
		int n;
		string s;
		tree.init();
		bool flag = true;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>s;
			if(flag){
				flag = flag && tree.insert(s);
			}
		}
		cout<<"Case "<<caso+1<<": ";
		(flag)? cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}