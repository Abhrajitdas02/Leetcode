class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.empty()) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0,result=0;
        int n=g.size();
        int m=s.size();
       while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                result++;
                i++;
            }
            j++;
        }
        return result;
    }
};