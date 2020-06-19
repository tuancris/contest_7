#include<bits/stdc++.h> 
using namespace std; 
  
int dem(string s) { 
	int n = s.length(); 
    stack<int> st; 
    st.push(-1); 
    int res = 0; 
    for (int i=0; i<n; i++) { 
        if (s[i] == '(')   st.push(i); 
        else  { 
            st.pop(); 
            if (!st.empty())  res = max(res, i - st.top()); 
            else st.push(i); 
        } 
    } 
    return res; 
} 
int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		cout << dem(s) << endl;
	}
	return 0;
}