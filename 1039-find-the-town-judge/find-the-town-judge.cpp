class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
     unordered_map<int,int> x;
     unordered_map<int,int> y;
     int m = trust.size();
     for(int i=0;i<m;i++){
         x[trust[i][0]]++;
         y[trust[i][1]]++;
     }
     
     for( int i=1;i<=n;i++){
         if(y[i]==(n-1) && x.find(i)==x.end())
         return i;
     }
     return -1;
    }
};