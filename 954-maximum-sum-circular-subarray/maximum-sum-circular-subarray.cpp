class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int best = 0,i=0;
        int ans = nums[0],ans2=nums[0],sum=0;
        for(int i=0;i<n;i++)
        {
            best = max(nums[i],nums[i]+best);
            ans = max(best,ans);

        }
        best=0;
        for(int i=0;i<n;i++)
        {
            best = min(nums[i],nums[i]+best);
            ans2 = min(best,ans2);
            sum+=nums[i];
        }
        if(ans<0)
        return ans;
        return max(ans,sum-ans2);
    }
};