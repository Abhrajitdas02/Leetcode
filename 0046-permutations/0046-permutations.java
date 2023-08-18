class Solution {
    private void findpermute(List<Integer>ds,boolean[] arr, int[] nums, List<List<Integer>>ans){
        if(ds.size()==nums.length){
            ans.add(new ArrayList<>(ds));
            return;
        }
        for(int i=0;i<nums.length;i++){
            if(!arr[i]){
                arr[i]=true;
                ds.add(nums[i]);
                findpermute(ds,arr,nums,ans);
                ds.remove(ds.size()-1);
                arr[i]=false;
            }
        }
    }
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans=new ArrayList<>();
        List<Integer> ds=new ArrayList<>();
        boolean arr[]=new boolean[nums.length];
        findpermute(ds,arr,nums,ans);
        return ans;
    }
}