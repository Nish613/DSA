class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l=0,u=n-1;
        while(l<u)
        {
            int mid = l+(u-l)/2;
            if(mid%2==1)
            mid--;
            if(nums[mid]==nums[mid+1])
            l=mid+2;
            else
            u=mid;
        }
        return nums[l];
    }
};