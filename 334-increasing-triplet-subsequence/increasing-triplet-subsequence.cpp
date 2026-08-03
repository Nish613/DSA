class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int p=INT_MAX,j=INT_MAX,k=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=p)
            p=nums[i];
            else if(nums[i]<=j)
            j=nums[i];
            else 
            return true;
        }
        return false;

    }
};