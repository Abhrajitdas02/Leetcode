//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends




class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int fun(int dp[],int l,int r,int x)
    {
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(dp[mid]>=x)
            r=mid;
            else
            l=mid+1;
        }
        return r;
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
       int dp[n];
       int len=1;
       dp[0]=a[0];
       for(int i=1;i<n;i++)
       {
           if(a[i]>dp[len-1])
           {
               dp[len]=a[i];
               len++;
           }
           else
           {
               int c=fun(dp,0,len-1,a[i]);
               dp[c]=a[i];
           }
       }
       return len;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends