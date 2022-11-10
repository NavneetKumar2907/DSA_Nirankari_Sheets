//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        int border = n;
        int count = 1;
        for( int i = 1 ; i <= 2*n-1; i++){
            if(i == 1 || i == 2*n-1){
                for( int j = 1; j <= 2*n-1; j++){
                    cout << n <<" ";
                }cout << "\n";
                continue;
            }
            
            int val = n;
            for( int j = 1; j <= 2*n-1; j++){
                // Columns
                if(j <= count){
                    cout << val-- <<" ";
                }else if( j> 2*n-count-2){
                    cout << val++ << " ";
                }else{
                    cout << val <<" ";
                }
            }cout<<"\n";
           if(i >= n){
               count--;
           }else{
                count++;
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
