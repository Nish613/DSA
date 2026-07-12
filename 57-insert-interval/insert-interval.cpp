class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& newInterval) {
        nums.push_back(newInterval);
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        int start = nums[0][0],end=nums[0][1];
        for(int i=0;i<n;i++)
        {
            int start2=nums[i][0];
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