class Solution {
public:
    string capitalizeTitle(string title) {
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        string ans = "";
        string word = "";
        
        for (int i = 0; i < title.size(); ++i) {
            if (title[i] != ' ') {
                word.push_back(title[i]);
            } else {
                if (word.size() > 2) {
                    word[0] = toupper(word[0]);
                }
                ans += word + " ";
                word = "";
            }
        }
        
        if (word.size() > 2) {
            word[0] = toupper(word[0]);
        }
        ans += word; 
        
        return ans;
    }
};
