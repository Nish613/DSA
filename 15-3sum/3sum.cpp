class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0,j=1,k=n-1;
        while(i<n)
        {
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k&&j>0&&nums[j]==nums[j-1])
                    j++;
                    while(j<k&&k<n-1&&nums[k]==nums[k+1])
                    k--;
                }
                else if(sum<0)
                j++;
                else
                k--;
            }
            i++;
            while(i>0&&i<n&&nums[i]==nums[i-1])
            i++;
            j=i+1;
            k=n-1;
        }
        
        return ans;
    }
};