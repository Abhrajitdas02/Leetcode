//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int calculate(int n,int mid){
        return mid*mid;
    }
    int floorSqrt(int n) {
        int low=1,high=n;
        while(low<=high){
            int mid=(low+high)/2;
            int ans=calculate(n,mid);
            if(ans<=n)
            low=mid+1;
            else
            high=mid-1;
        }
        return low-1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends