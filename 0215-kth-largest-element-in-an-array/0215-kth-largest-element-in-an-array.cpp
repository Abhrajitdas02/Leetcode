class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i = 0 ; i <nums.size();i++){
            int top = nums[i];
            pq.push(top);
        }
        //int i = nums.size()-1;
        int ans = 0;
        while(k--){
            int element = pq.top();
            pq.pop();
            ans = element;
        }
        return ans;
    }
};