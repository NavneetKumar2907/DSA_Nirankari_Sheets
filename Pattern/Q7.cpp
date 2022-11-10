//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i =1; i<= n; i++){
            //No of rows.
            for(int j=n; j>i; j--){
                //No. of Space.
                cout <<" ";
            }
          int cond = i;
          if(i>1) cond += cond-1;
            for(int k =1; k<=cond; k++){
                    //No of stars.
                    cout <<"*";
                }
            cout<<"\n";
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
