//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for( int i = 1; i <= n; i++){
            //Space
            for(int k = n-i; k>0; k--){
                cout <<" ";
            }
            
            int cond = i + (i-1);
            char ch = 'A';
            for(int j = 1; j<= cond; j++){
                cout << ch ;
                if(j< i) ch++;
                else ch--;
            }cout <<"\n";
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
