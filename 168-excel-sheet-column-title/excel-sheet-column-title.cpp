class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber){
            columnNumber--;
            int digit=((columnNumber%26)+65);
            columnNumber=columnNumber/26;
            ans=(char)digit+ans;
        }
        return ans;
    }
};