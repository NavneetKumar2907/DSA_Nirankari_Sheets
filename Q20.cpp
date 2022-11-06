//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int space = 2*(n-1);
        string s = "*";
        for(int i = 1; i<=2*n; i++){
            cout << s;
            //space
            for(int j = 0; j<space;j++){
                cout <<" ";
            }
            cout << s <<"\n";
            if(i<n) {
                space-=2;
                s+="*";
            }
            else {
                space+=2;
                s.pop_back();
            }
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
