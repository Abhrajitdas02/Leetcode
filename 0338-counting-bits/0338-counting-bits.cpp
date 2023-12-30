class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> v1;
        for(int i = 0; i <= n; i++) {
            int sum = 0;
            int num = i;
            while (num != 0) {
                sum += num % 2;
                num /= 2;
            }
            v1.push_back(sum);
        }
        return v1;
    }
};