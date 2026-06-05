class Solution {
public:
    void rev(vector<int>& nums,int start,int end)
    {
        
        while(start<end)
        {
            swap(nums[start],nums[end-1]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        rev(nums,0,nums.size());
        rev(nums,0,k);
        rev(nums,k,nums.size());
    }
};