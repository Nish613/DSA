class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<int> dist;
        for(int i=0;i<points.size();i++)
        {
            dist.push_back(points[i][0]*points[i][0]+points[i][1]*points[i][1]);
        }

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
            pq.push({dist[i],i});
        }
        for(int i=k;i<points.size();i++)
        {
            if(pq.top().first>dist[i])
            {
                pq.pop();
                pq.push({dist[i],i});
            }
        }
        vector<vector<int>> ans;
        while(!pq.empty())
        {
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }
        return ans;

    }
};