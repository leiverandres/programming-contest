#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int cases, tmp;
	string s;
	cin>>cases;
	for (int caso = 0; caso < cases; ++caso) {
		int n, m, tmp2 = 0, size = 0;
		cin>>n>>m;
		deque<int> q;	
		cout<<"Case "<<caso+1<<":\n";
		for (int i = 0; i < m; ++i) {
			cin>>s;
			if (s == "pushLeft") {
				cin>>tmp;
				if (q.size() != n) {
					q.push_back(tmp);
					cout<<"Pushed in left: "<<tmp<<endl;
				} else {
					cout<<"The queue is full\n";
				}
			} else if (s == "pushRight") {
				cin>>tmp;
				if (q.size() != n) {
					q.push_front(tmp);
					cout<<"Pushed in right: "<<tmp<<endl;
				} else {
					cout<<"The queue is full\n";
				}
			} else if (s == "popLeft") {
				if (!q.empty()) {
					cout<<"Popped from left: "<<q.back()<<endl;
					q.pop_back();
				} else {
					cout<<"The queue is empty\n";
				}
			} else {
				if (!q.empty()) {
					cout<<"Popped from right: "<<q.front()<<endl;
					q.pop_front();
				} else {
					cout<<"The queue is empty\n";
				}
			}
		}
	}
	return 0;
}