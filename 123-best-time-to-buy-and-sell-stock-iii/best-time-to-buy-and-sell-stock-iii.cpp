// class Solution {
// private:
//    int f(int ind, int buy, int cap, vector<int>&prices,int n, vector<vector<vector<int>>>&dp){
//        if(ind == n || cap == 0) return 0;
        
//        if(dp[i][])

//        if(buy == 1){
//            return max(-prices[ind] + f(ind+1 , 0, cap,prices, n), 0 + f(ind +1, 1, cap, prices, n));
//        }
//        else
//       return max(prices[ind] + f(ind +1, 1, cap-1,prices, n), 0 + f(ind+1, 0 ,cap, prices, n));
//    }
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int b1 = INT_MIN, s1 = 0, b2 = INT_MIN, s2 = 0;
//         for (int p : prices) {
//             b1 = max(b1, -p);
//             s1 = max(s1, b1 + p);
//             b2 = max(b2, s1 - p);
//             s2 = max(s2, b2 + p);
//         }
//         return s2;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b1 = INT_MIN, s1 = 0, b2 = INT_MIN, s2 = 0;
        for (int p : prices) {
            b1 = max(b1, -p);
            s1 = max(s1, b1 + p);
            b2 = max(b2, s1 - p);
            s2 = max(s2, b2 + p);
        }
        return s2;
    }
};