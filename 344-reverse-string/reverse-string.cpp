class Solution {
private:
    void find(int i,int j,vector<char>& s){
           if(i>=j) return;
           else{
            swap(s[i],s[j]);
            return find(i+1,j-1,s);
           }
    }
public:
    void reverseString(vector<char>& s) {
        int l=s.size();
        return find(0,l-1,s);
    }
};