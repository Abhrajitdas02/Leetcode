class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        int ans=(int)(columnTitle[n-1])-64;
        int x=1;
        for(int i=n-2;i>=0;i--){
              ans+=x*26*((int)(columnTitle[i])-64);
              x*=26;
        }
        return ans;
    }
};