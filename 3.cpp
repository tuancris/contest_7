#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str; getline(cin,str);
    stack<char> s;
    for(int i=0; i <= str.length(); i++) {
        char c = str[i];
        if(c == ' ' || c == '\0') {
            while(!s.empty()) {
                cout << s.top();
                s.pop();
            }
            cout << " ";
        }
        else s.push(c);
    }
    cout << endl;
}
int main() {
    int t; cin >> t; cin.ignore();
    while(t--) solve();
    return 0;
}
