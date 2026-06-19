class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,u=n-1;
        while(l<=u)
        {
            int mid = (l+u)/2;
            if(nums[mid]<target)
            l=mid+1;
            else if(nums[mid]>target)
            u=mid-1;
            else if(nums[mid]==target)
            return mid;
        }
        return -1;
    }
};