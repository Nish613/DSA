class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        struct cmp
        {
            bool operator()(pair<int,int>&a,pair<int,int>&b)
            {
                if(a.second!=b.second)
                {
                    return a.second<b.second;
                }
                return a.first<b.first;
                
            }
        };
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        for(auto i:mp)
        {
            pq.push({i.first,i.second});
        }
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};