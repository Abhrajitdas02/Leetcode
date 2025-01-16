class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int carry=0;
        int l1=num1.size()-1;
        int l2=num2.size()-1;
        int total=0;
        while(l1>=0||l2>=0||carry){
            total=carry;
            if(l1>=0){
                total+=num1[l1]-'0';
                l1--;
            }
            if(l2>=0){
                total+=num2[l2]-'0';
                l2--;
            }
            int num=total%10;
            carry=total/10;
            ans+=num+'0';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};