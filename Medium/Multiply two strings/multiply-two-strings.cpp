//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
   string multiplyStrings(string s1, string s2) {

        string ans = "";
        if(s1[0]=='-' ^ s2[0] == '-')
            ans += '-';
        
        if(s1[0] == '-')
            s1.erase(0, 1);
        if(s2[0] == '-')
            s2.erase(0, 1);
       
       
        int n1 = s1.length();
        int n2 = s2.length();
        int size = n1+n2+1;
       
        vector<int> mult(size, 0);
        int cnt = 1;
       
        for(int i=n1-1; i>=0; i--)
        {
            {
                int pos = size - cnt;
                int carry = 0;
                for(int j=n2-1; j>=0; j--)
                {
                    int val = (s1[i]-48) * (s2[j]-48) + mult[pos] + carry;
                    int item = val % 10;
                    carry = val / 10;
                    
                    mult[pos] = item;
                    pos--;
                }
                
                if(carry != 0)
                    mult[pos] = carry;
            }
            
            cnt++;
        }
        
        int i = 0;
        while(i < size and mult[i] == 0)
            i++;
        
        if(i == size)
            return "0";
        
        while(i < size)
            ans += mult[i++] + 48;
        
        return ans;
    }
};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends