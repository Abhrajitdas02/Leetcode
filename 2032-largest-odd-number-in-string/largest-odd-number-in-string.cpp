class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        string maxi="";
        for(int i=n-1;i>=0;i--){
            if(((num[i]-'0')%2)==1){
               maxi=num.substr(0,i+1);
               break;
            }
        }
        return maxi;
    }
};