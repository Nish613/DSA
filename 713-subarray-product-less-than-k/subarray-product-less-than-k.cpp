class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0,j=0,count=0;
        long long prod=1;
        while(j<n)
        {
            prod*=nums[j];
            
            while(prod>=k)
            {
                prod/=nums[i];
                i++;

            }
            count+=j-i+1;
                
            j++;
        }
        return count;
    }
};