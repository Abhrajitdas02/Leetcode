class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i = 0 ; i<piles.size();i++){
            int top = piles[i];
            pq.push(top);
        }
        int sum = 0;
        while(k--){
            int element = pq.top();
            pq.pop();
            element = element - floor(element/2);
            pq.push(element);
        }

        while(!pq.empty()){
            int top = pq.top();
            pq.pop();
            sum += top;
        }
        return sum;
    }
};