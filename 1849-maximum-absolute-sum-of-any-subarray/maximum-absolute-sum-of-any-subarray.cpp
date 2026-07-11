class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int best = 0;
        int ans = nums[0],ans2 = nums[0];
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
        }

        return max(abs(ans),abs(ans2));
    }
};