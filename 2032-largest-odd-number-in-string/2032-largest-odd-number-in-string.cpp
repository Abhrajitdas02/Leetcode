class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        int x=-1;
        int n=num.size();
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2==1){
                ans=num.substr(0,i+1);
                break;
            }
        }
        return ans;
    }
};