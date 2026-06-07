class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(),len=0,maxlen=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                maxlen=max(maxlen,len);
                
                len=0;
            }
            else
            {
                len+=nums[i];

            }
            
        }
        return max(maxlen,len);
    }
};