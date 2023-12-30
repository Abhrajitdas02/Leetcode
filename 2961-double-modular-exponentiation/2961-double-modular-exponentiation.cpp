class Solution {
public:
  int modPow(int x, unsigned int y, unsigned int m)
{
    if (y == 0)
        return 1;
    long p = modPow(x, y / 2, m) % m;
    p = (p * p) % m;
    return y % 2 ? (p * x) % m : p;
}
vector<int> getGoodIndices(vector<vector<int>>& v, int target) {
    vector<int> res;
    for (int i = 0; i < v.size(); ++i)
        if (modPow(modPow(v[i][0], v[i][1], 10), v[i][2], v[i][3]) == target)
            res.push_back(i);
    return res;
}
};