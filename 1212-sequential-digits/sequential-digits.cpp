class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        for(int i=1;i<=9;i++){
            int num=i;
            int next = i+1;
            while(num<=high && next<=9){
                num = num*10 + next;
                next++;
                if(low<=num && num<=high) ans.push_back(num);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};