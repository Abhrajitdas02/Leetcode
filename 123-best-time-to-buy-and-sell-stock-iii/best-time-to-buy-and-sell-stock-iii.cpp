class Solution {
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
// public:
//     int maxProfit(vector<int>& prices) {
//         int n =prices.size();
//         vector<int> ahead(2,0), cur(2,0);

//        ahead[0] = ahead[1] = 0;
//         for(int ind=n-1; ind>=0; ind--){
//             for(int buy=0; buy<=1; buy++) {
//                 int profit =0;
//                 if(buy){
//          profit = max(-prices[ind] + ahead[0], 0 + ahead[1]);
//          }
//        else{
//       profit = max(prices[ind] + ahead[1], 0 + ahead[0]);
//      }
//       cur[buy] = profit;
//             }
//            ahead=cur;
//         }
//         return ahead[1];
//     }
// };

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


public:
   int maxProfit(vector<int>& prices) {
        int n = prices.size();
       vector<vector<int>> after(2, vector<int>(3,0));
       vector<vector<int>> cur(2,vector<int>(3,0));

       for(int ind=n-1;ind>=0;ind--){
           for(int buy=0;buy<=1;buy++){
               for(int cap =1;cap<=2;cap++){
                   if(buy){
                       cur[buy][cap] = max(-prices[ind] + after[0][cap],
                       0 + after[1][cap]);
                   }
                   else{
                       cur[buy][cap]= max(prices[ind] + after[1][cap-1],
                       0 + after[0][cap]);
                   }
               }
               after = cur;
           }
       } 
          return after[1][2];
    }
};