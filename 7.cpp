#include <bits/stdc++.h>
using namespace std;

void solve() {
	string str; cin >> str;
	stack<char> s;
	int count = 0;
	for(int i=0; i<= str.length(); i++) {
		char c = str[i];
		if(c == '(') s.push(c);
		else if(c == ')') {
			if(!s.empty()) s.pop();
			else {
				s.push('(');
				count ++;
			}
		}
	}
	cout << count + s.size()/2 << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
