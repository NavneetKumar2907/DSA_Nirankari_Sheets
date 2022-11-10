//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int space = 4*n-2;
        string s = "1", e = "1";
        for(int i = 1; i <= n; i++){
             string el = to_string(i+1);
             cout << s ;
             //for space
             for(int j = 1; j<space; j++){
                 cout <<" ";
             }
             cout << e << "\n";
             s += " " + el;
             e = el+" " + e;
             space -= 4;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
