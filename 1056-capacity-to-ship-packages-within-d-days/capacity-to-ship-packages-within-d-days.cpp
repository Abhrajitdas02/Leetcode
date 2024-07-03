class Solution {
public:
    int possible(vector<int>& wt,int cap){
        int day=1,load=0;
        int n=wt.size();
        for(int i=0;i<n;i++){
            if(load+wt[i]>cap){
                day=day+1;
                load=wt[i];
            }
            else{
                load+=wt[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=INT_MIN;
        int sum=0;
        for(auto i:weights){
         maxi=max(maxi,i);
         sum+=i;
        }
        int low=maxi,high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(weights,mid)<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
       return low;
    }
};