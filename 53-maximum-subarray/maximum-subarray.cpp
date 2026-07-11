class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int best=0;
        int ans=nums[0];
        for(int i=0;i<n;i++)
        {
            best = max(nums[i],nums[i]+best);
            ans = max(best,ans);
        }
        return ans;
    }
};