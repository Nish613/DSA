class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int x) {
        int n = nums.size();
        int l=0,u=n-1;
        int low=-1,high=-1;
        //low
        while(l<=u)
        {
            int mid = l+(u-l)/2;
            if(nums[mid]==x)
            {
                low=mid;
                u=mid-1;

            }
            else if(nums[mid]<x)
            l=mid+1;
            else
            u=mid-1;
        }
        //high
        l=0,u=n-1;
        while(l<=u)
        {
            int mid = l+(u-l)/2;
            if(nums[mid]==x)
            {
                high=mid;
                l=mid+1;

            }
            else if(nums[mid]<x)
            l=mid+1;
            else
            u=mid-1;
        }
        return {low,high};
    }
};