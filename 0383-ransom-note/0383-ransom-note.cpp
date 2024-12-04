class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        char count[256];
        for(auto i:ransomNote){
            count[i]++;
        }
        for(auto i:magazine){
            if(count[i]>0)
            count[i]--;
        }
        for(int i=0;i<256;i++){
            if(count[i]!=0) return false;
        }
        return true;
    }
};