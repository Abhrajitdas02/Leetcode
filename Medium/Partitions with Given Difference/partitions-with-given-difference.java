//{ Driver Code Starts
import java.io.*;
import java.util.*;


class IntArray
{
    public static int[] input(BufferedReader br, int n) throws IOException
    {
        String[] s = br.readLine().trim().split(" ");
        int[] a = new int[n];
        for(int i = 0; i < n; i++)
            a[i] = Integer.parseInt(s[i]);

        return a;
    }

    public static void print(int[] a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }

    public static void print(ArrayList<Integer> a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }
}

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int n;
            n = Integer.parseInt(br.readLine());
            
            
            int d;
            d = Integer.parseInt(br.readLine());
            
            
            int[] arr = IntArray.input(br, n);
            
            Solution obj = new Solution();
            int res = obj.countPartitions(n, d, arr);
            
            System.out.println(res);
            
        }
    }
}

// } Driver Code Ends



class Solution {
     public static int countPartitions(int n, int d, int[] arr) {
        // code here
        int sum1=0;
        for(int i=0;i<n;i++){
            sum1+=arr[i];
        }
          if ((sum1 - d) < 0 || (sum1 - d) % 2 != 0)
            return 0;
        int s1=(d+sum1)/2;
        return countOfSubsetSum(arr,s1,n);
    }
    public static int countOfSubsetSum(int[] arr,int s1,int n){
        int MOD=(int)(1e9+7);
        int[][] dp= new int[n+1][s1+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<s1+1;j++){
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<s1+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=(dp[i-1][j-arr[i-1]] + dp[i-1][j])%MOD;
                    
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][s1]%MOD;
    }
} 
