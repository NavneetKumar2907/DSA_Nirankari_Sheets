//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for(int i = 1; i<=n; i++){
            //Uper Half
            for(int j = n; j>i; j--){
                // SPaces
                cout <<" ";
            }
           
            for(int k = 1; k<= i; k++){
                cout <<"* ";
            }cout<<"\n";
        }
        for(int i = n; i>=1; i--){
            //Lower Half
            for(int j = n; j > i; j--){
                cout <<" ";
            }
            for(int k = 1; k<=i;k++){
                cout <<"* ";
            }
            cout <<"\n";
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends
