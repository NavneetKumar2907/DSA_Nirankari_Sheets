//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i =n; i >=1; i--){
	        for(int j = n; j>i; j--){
	            // No of spaces.
	            cout << " ";
	        }
	        int cond = i + (i-1);
	        for(int k = 1; k<= cond ; k++){
	            cout<<"*";
	        }cout<<"\n";
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
