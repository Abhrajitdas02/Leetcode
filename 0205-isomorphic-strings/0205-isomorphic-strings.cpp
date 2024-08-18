class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        
        int mapS[256] = {0};  // Maps characters from s to t
        int mapT[256] = {0};  // Maps characters from t to s
        
        for(int i = 0; i < s.length(); i++) {
            // Check if there's a mapping conflict
            if(mapS[s[i]] != mapT[t[i]]) {
                return false;
            }
            // Set the mapping; add 1 to avoid collision with default 0
            mapS[s[i]] = i + 1;
            mapT[t[i]] = i + 1;
        }
        
        return true;
    }
};
