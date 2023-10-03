//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
    private:
    int value(char c){
         if(c=='I') return 1;
            if(c=='V') return 5;
            if(c=='X') return 10;
            if(c=='L') return 50;
            if(c=='C') return 100;
            if(c=='D') return 500;
            if(c=='M') return 1000;
            return -1;
    }
  public:
    int romanToDecimal(string &str) {
        // code here
        int res=0;
           for(int i=0;i<str.length();i++){
               int s1=value(str[i]);
               if(i+1<str.length()){
                   int s2=value(str[i+1]);
                   if(s1>=s2){
                       res = res+s1;
                   }
                   else {
                       res=res+s2-s1;
                       i++;
                   }
               }
               else{
                   res=res+s1;
               }
           }
           return res;
        }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends