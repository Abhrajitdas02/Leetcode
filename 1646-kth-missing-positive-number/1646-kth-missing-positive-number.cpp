class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n =arr.size();
        int low=0,high=n-1;

        if(k<arr[0]) return k;

        if(k>arr[n-1]-n) return k+n;

        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]-mid-1>=k)
            high=mid-1;
            else
            low=mid+1;
        }
        return low+k;
    }
};
