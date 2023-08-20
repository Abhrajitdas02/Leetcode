class Solution {
public:
    int minimumSum(int n, int k) {
      unordered_map<int, int> mp;
        int i = 0, sum = 0, start = 1;
        while (i < n) {
            int diff = k - start;
            
            if (mp.find(diff) == mp.end()) {
                mp[start]++;
                sum += start;
                start++;
                i++;
            } else {
                start++;
            }
        }
        
        return sum;
    }
};