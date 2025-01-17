//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minChar(string& s) {
        // Write your code here
        string st=s;
        int size=s.size();
        reverse(s.begin(),s.end());
        st+='$';
        st+=s;
        int n=st.size();
        
        vector<int> lps(n,0);
        int pre=0, suf=1;
        
        while(suf<st.size()){
            if(st[pre]==st[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else{
                if(pre==0)
                suf++;
                else
                pre=lps[pre-1];
            }
            
        }
    
    return size-lps[n-1];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends