class Solution {
private:
  void find(int ind,string s,vector<string>& ds,vector<vector<string>>& ans){
     if(ind==s.length()){
        ans.push_back(ds);
        return;
     }
     for(int i=ind;i<s.length();i++){
        if(isPalin(s,ind,i)){
        ds.push_back(s.substr(ind,i-ind+1));
        find(i+1,s,ds,ans);
        ds.pop_back();
     }
  }
}
bool isPalin(string s,int start, int end){
    while(start<=end){
        if(s[start++]!=s[end--]) return false;
    }
    return true;
}
public:
    vector<vector<string>> partition(string s) {
        vector<string>ds;
        vector<vector<string>> ans;
        find(0,s,ds,ans);
        return ans;
    }
};