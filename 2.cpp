#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    stack<int> a; string s;
    while(t--) {
        cin >> s;
        if(s == "PUSH") {
            int x; cin >> x;
            a.push(x);
        }
        else if(s == "POP") {
            if(!a.empty()) a.pop();
        }
        else if(s == "PRINT") {
            if(!a.empty()) cout << a.top() << endl;
            else cout << "NONE" << endl;
        }
    }
    return 0;
}