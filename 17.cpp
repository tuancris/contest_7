#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    stack<int> st;
    for(int i = s.length() - 1 ; i >= 0 ; i--) {
        char c = s[i];
        if('0' <= c && c <= '9') 
            st.push(c - '0');
        else {
            int x1 = st.top(); st.pop();
            int x2 = st.top(); st.pop(); 
            int res;
            if(c == '+')        res = x1 + x2;
            else if(c == '-')   res = x1 - x2;
            else if(c == '*')   res = x1 * x2;
            else if(c == '/')   res = x1 / x2;
            st.push(res);
        }
    }
    cout << st.top() << endl;
}
int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
