class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        struct cmp
        {
            bool operator()(pair<string,int>&a,pair<string,int>&b)
            {
                if(a.second!=b.second)
                return a.second<b.second;
                return a.first>b.first;
            }
        };
        priority_queue<pair<string,int>,vector<pair<string,int>>,cmp> pq;
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();i++)
        mp[words[i]]++;
        for(auto i:mp)
        {
            pq.push({i.first,i.second});
        }
        vector<string> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;

    }
};