class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_set<char> st;
        int left=0;
        int maxLen=0;
        for(int right=0;right<n;right++){
            while(st.find(s[right])!=st.end()){
            st.erase(s[left]);
            left++;
            }
        st.insert(s[right]);
        maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};