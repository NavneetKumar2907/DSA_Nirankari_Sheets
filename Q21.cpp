//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i =1; i <= n; i++){
            if(i==1 || i==n){
                for(int j = 0; j<n; j++){
                    cout<<"*";
                }cout<<"\n";
            }else{
                cout<<"*";
                //space
                for(int j=0; j<n-2; j++){
                    cout << " ";
                }
                cout << "*\n";
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends
