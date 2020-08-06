#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    stack<char> st;
    for(int i=0;i<s.size();i++) {
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')') {
            int t = st.top(); st.pop();
            if(t == 0) continue;
            else if(s[t-1] == '+') continue;
            else if(s[t-1] == '-') {
                for(int j=t; j<=i; j++) {
                    if(s[j] == '+') s[j] = '-';
                    else if(s[j] == '-') s[j] = '+';
                }
            }
        }
    }
    for(int i=0; i<s.size(); i++) {
        if(s[i] != '(' && s[i] != ')') 
           cout << s[i];
    }
    cout << endl;
}
int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}