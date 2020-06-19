#include <bits/stdc++.h> 
using namespace std; 
  
bool kt(string A) { 
    int a = 0, b = 0; 
    for (int i = 0; i < A.size(); i++) { 
        if (A[i] == '(' && A[i + 2] == ')') 
            return 1; 
        if (A[i] == '*' || A[i] == '+' || A[i] == '-'|| A[i] == '/') 
            a++; 
        if (A[i] == '(') 
            b++; 
    } 
    if (b > a)  return 1; 
    return 0; 
} 
int main() {
    int t; cin >> t;
    while(t--) {
        string A; cin >> A;
        if(kt(A)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
  