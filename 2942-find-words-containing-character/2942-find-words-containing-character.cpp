class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].length();j++){
                if (words[i][j] == x) {
                    ans.push_back(i);
                    break;
              }
            }
        }
        return ans;
    }
};