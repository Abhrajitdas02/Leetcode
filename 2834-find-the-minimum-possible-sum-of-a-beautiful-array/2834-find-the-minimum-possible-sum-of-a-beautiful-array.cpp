class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
         unordered_map<int, int> mp;
        int i = 0, start = 1;
        long long sum=0;
        while (i < n) {
            int diff = target - start;
            
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