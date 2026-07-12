class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        int start = nums[0][0];
        int end = nums[0][1];
        for(int i=0;i<n;i++)
        {
            int start2 = nums[i][0];
            int end2 = nums[i][1];
            if(end>=start2)
            {
                end = max(end,end2);
            }
            else
            {
                ans.push_back({start,end});
                start = start2;
                end = end2;
            }
           
        }
        ans.push_back({start,end});
        return ans;
    }
};