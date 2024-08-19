//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
  long long int upto(string s, int x){
        
        int n = s.length();
        int i = 0;
        int j = 0;
        int count = 0;
        long long ans = 0;
        
        vector<int> mp(26,0);
        
        while(j < n){
            mp[s[j] - 'a']++;
            
            if(mp[s[j]-'a'] == 1){
                count++;
            }
            
            while(count > x){
                mp[s[i]-'a']--;
                if(mp[s[i]-'a'] <= 0){
                    count--;
                }
                i++;
            }
            ans = ans + j-i+1;
            j++;
        }
        return ans;
    }
    
    long long int substrCount (string s, int k) {
        
        return upto(s, k) - upto(s, k-1);

    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends