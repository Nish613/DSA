class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        struct cmp
        {
            bool operator()(pair<int,int>&a,pair<int,int>&b)
            {
                if(a.first!=b.first)
                return a.first<b.first;
                return a.second<b.second;
            }
        };
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
        for(int i=0;i<k;i++)
        {
            int dist=abs(arr[i]-x);
            pq.push({dist,arr[i]});

        }
        for(int i=k;i<arr.size();i++)
        {
            int dist=abs(arr[i]-x);
            if(pq.top().first>dist)
            {
                pq.pop();
                pq.push({dist,arr[i]});
            }
        }
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};