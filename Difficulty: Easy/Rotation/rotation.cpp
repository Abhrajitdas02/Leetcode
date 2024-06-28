//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int low=0,high=n-1;
	    int mini=INT_MAX;
	    int ans;
	    while(low<=high){
	        int mid=(low+high)/2;
	        if(arr[low]<=arr[high]){
	            if(arr[low]<mini){
	            ans=low;
	            }
	            break;
	        }
	        if(arr[low]<=arr[mid]){
	           if(arr[low]<mini){
	               mini=arr[low];
	               ans=low;
	           }
	           low=mid+1;
	        }
	        else{
	            if(arr[mid]<mini){
	                mini=arr[mid];
	                ans=mid;
	            }
	            high=mid-1;
	        }
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends