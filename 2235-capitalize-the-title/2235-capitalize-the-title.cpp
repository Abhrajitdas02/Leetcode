class Solution {
public:
    string capitalizeTitle(string title) {
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        
        int n=title.size();
        int start = 0;
        int end = title.size();
        int size;
        int i=0;

        while (i < n) {

            start = i;
            while (i < n && title[i] != ' ') {

                i++;
            }
            end = i - 1;
            size = end - start + 1;
            if (size > 2) {
                title[start] = toupper(title[start]);
            }
            i++;
        }
        return title;
    }
};
