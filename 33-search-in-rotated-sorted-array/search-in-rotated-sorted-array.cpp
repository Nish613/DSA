class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,u=n-1;
        while(l<=u)
        {
            int mid = l+(u-l)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>=nums[l])
            {
                if(nums[l]<=target&&nums[mid]>target)
                u=mid-1;
                else 
                l=mid+1;
            }
            else if(nums[mid]<=nums[u])
            {
                if(nums[u]>=target&&nums[mid]<target)
                l=mid+1;
                else 
                u=mid-1;
            }
        }
        return -1;
    }
};