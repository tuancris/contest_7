#include<bits/stdc++.h>
using namespace std;
bool kt(char x) {
    if(x== '+' || x == '-' || x == '*' || x == '/') return true;
    return false;
}
string tiensangtrung(string str) {
    stack<string> s;
    for(int i=str.length()-1; i>=0; i--) {
        char c = str[i];
        if(!kt(c)) s.push(string(1,c));
        else {
            string o1 = s.top(); s.pop();
            string o2 = s.top(); s.pop();
            string tmp = "(" + o1 + c + o2 + ")";
            s.push(tmp);
        }
    }
    return s.top();
}
int main() {
    int t; cin >> t;
    while(t--) {
        string str; cin >> str;
        cout << tiensangtrung(str) << endl;
    }
    return 0;
}