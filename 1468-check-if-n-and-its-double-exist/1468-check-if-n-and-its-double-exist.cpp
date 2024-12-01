class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        while(i<n){
            int j=i+1;
            while(j<n){
                if(arr[i]==2*arr[j] || arr[j]==2*arr[i]) return true;
                j++;
            }
            i++;
        }
        return false;
    }
};