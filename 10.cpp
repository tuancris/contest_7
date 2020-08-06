#include<bits/stdc++.h>
using namespace std;
string sosanh(string s) {
    stack<int> st;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')') {
            int t = st.top(); st.pop();
            if(t == 0) continue;
            else if(s[t-1] == '+') continue;
            else if(s[t-1] == '-') {
                for(int j=t;j<=i;j++) {
                    if(s[j] == '+') s[j] = '-';
                    else if(s[j] == '-') s[j] ='+';
                }
            }
        }
    }
    string str = "";
    for(int i=0;i<s.size();i++) {
        if(s[i] != ')' && s[i] !='(') {
            str += s[i];
        }
    }
    return str;
}
int main() {
    int t; cin >> t;
    while(t--) {
        string p1,p2; cin >> p1 >> p2;
        if(sosanh(p1) == sosanh(p2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
