class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int l=0,u=n-1;
        while(l<=u)
        {
            int mid = l+(u-l)/2;
            if(nums[l]<=nums[mid])
            {
                mini = min(mini,nums[l]);
                l=mid+1;
            }
            else
            {
                mini=min(mini,nums[mid]);
                u=mid-1;
            }
            
        }
        return mini;
    }
};