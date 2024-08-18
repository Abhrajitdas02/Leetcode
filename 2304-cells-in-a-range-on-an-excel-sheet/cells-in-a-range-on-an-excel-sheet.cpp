class Solution {
public:
    vector<string> cellsInRange(string s) {
        char start = s[0];
        char end = s[3];

        int element1 = s[1] - '0';
        int element2 = s[4] - '0';

        vector<string> v;

        while(start <= end)
        {
            int j = element1;
            while(j <= element2)
            {
                string temp = "";
                char ch = j + '0';
                temp.push_back(start);
                temp.push_back(ch);
                v.push_back(temp);
                j++;
            }
            start++;
        }
        return v;
    }
};