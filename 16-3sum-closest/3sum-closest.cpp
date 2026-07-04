class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=1,k=n-1,mini = nums[0]+nums[1]+nums[2];
        while(i<n-2)
        {
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(mini-target))
                mini=sum;
                else if(sum<target)
                j++;
                else
                k--;
            }
            i++;
            j=i+1;
            k=n-1;
        }
        return mini;
    }
};