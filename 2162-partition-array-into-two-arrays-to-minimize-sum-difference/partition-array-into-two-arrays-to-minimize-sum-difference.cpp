class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size() / 2;
        vector<int> l1(n), l2(n);
        for (int i = 0; i < n; i++) {
            l1[i] = nums[i];
        }
        for (int i = 0; i < n; i++) {
            l2[i] = nums[i + n];
        }
        map<int, vector<int>> sums1, sums2;
        populateSums(sums1, l1);
        populateSums(sums2, l2);
        int mn = 1e9;
        for (auto &it : sums1) {
            for (auto &a : it.second) {
                if (sums2.count(n - it.first) == 0) break;
                vector<int> &vec = sums2[n - it.first];
                int l = 0, r = vec.size() - 1;
                while (l <= r) {
                    int mid = l + (r - l) / 2;
                    int s = abs(sum - 2*(a + vec[mid]));
                    int s_l = mid - 1 >= 0 ? abs(sum - 2*(a + vec[mid - 1])) : 1e9;
                    int s_r = mid + 1 < vec.size() ? abs(sum - 2*(a + vec[mid + 1])) : 1e9;
                    if (s_l > s) {
                        mn = min(mn, s);
                        l = mid + 1;
                    } else {
                        r = mid - 1;
                    }
                }
            }
        }
        return mn;
    }
private:
    void populateSums (map<int, vector<int>> &sums, vector<int> &l) {
        int n = l.size();
        for (int mask = 0; mask < (1 << n); mask++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                if ((mask >> i) & 1) {
                    sum += l[i];
                }
            }
            sums[__builtin_popcount(mask)].push_back(sum);
        }
        for (auto &it: sums) {
            vector<int> &v = it.second;
            sort(v.begin(), v.end());
            v.resize(unique(v.begin(), v.end()) - v.begin());
        }
    }
};