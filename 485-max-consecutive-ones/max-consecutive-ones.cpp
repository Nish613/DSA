class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count=0,max_count=0,i=0;
        while(i<n)
        {
            while(i<n&&nums[i]==1)
            {
                count++;
                i++;   
            }
            if(count>max_count)
            max_count=count;
            count=0;
            i++;
        }
        return max_count;
    }
};