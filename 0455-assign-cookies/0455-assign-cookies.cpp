class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=s.size();
        int m=g.size();
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int i=0,j=0,c=0;
        while(i<n && j<m){
            if(s[i]>=g[j]){
                c++;
                j++;
            }
            i++;
        }
        return c;
    }
};