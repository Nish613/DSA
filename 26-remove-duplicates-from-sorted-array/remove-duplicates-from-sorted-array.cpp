class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
            
            temp.push_back(nums[i]);
            while(i<n-1&&nums[i]==nums[i+1])
            i++;
            
        }
        nums=temp;
        return temp.size();
    }
};