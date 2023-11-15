class Solution {
    int checkSwap(vector<int>& nums1,vector<int>& nums2)
    {
       int count = 0;
       int n = nums1.size();
       for(int i=0;i<n-1;i++)
        {
            if(nums1[i] <= nums1[n-1] && nums2[i]<=nums2[n-1])
                continue;
            if(nums1[i] <= nums2[n-1] && nums2[i] <= nums1[n-1])
            {
               count++; 
            }   
            else
            {
                count = INT_MAX-1;
                break;
            }
        }
        return count;
    }
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int count1=INT_MAX,count2=INT_MAX;
        count1 = checkSwap(nums1,nums2);
        
        swap(nums1[n-1],nums2[n-1]);
        
        count2 = checkSwap(nums1,nums2) + 1;
        
        int ans = min(count1,count2);
        if(ans >= INT_MAX-10)
            return -1;
        else
            return ans;
        
    }
};