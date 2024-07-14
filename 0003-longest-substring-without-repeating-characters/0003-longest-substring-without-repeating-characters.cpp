// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int l = s.length();
//         int longest=0;
//         string st="";
//         for(int i=0;i<l;i++){
//             st+=s[i];
//             for(int j=i;j<l-1;j++){
//              if(s[j]!=s[j+1]){
//                 st+=s[j];
//              }
//             }
//             longest= max(longest,(int)st.length());
//         }
//         return longest;
//     }
// };

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLength = 0;
        unordered_set<char> charSet;

        for (int right = 0; right < s.length(); right++) {
            while (charSet.find(s[right]) != charSet.end()) {
                charSet.erase(s[left]);
                left++;
            }

            charSet.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;        
    }
};