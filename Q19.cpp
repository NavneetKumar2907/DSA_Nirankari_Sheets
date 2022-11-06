//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int space = 0;
        int half = n;
        for(int i =1; i<= 2*n; i++){
            //Print star.
            for(int j =0; j<half; j++){
                cout<<"*";
            }
            // print space
            for(int k = 0; k<space; k++){
                cout << " ";
            }
            //second half star
            for(int j = 0; j<half;j++){
                cout<<"*";
            }cout<<"\n";
            
            if(i==n){
                continue;
            }else if(i < n){
                space+=2;
                half--;
            }else{
                space-=2;
                half++;
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
