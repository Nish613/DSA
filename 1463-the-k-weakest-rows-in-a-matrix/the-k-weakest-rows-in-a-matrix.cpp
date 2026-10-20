class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        struct cmp
        {
            bool operator()(pair<int,int>&a,pair<int,int>&b)
            {
                if(a.first!=b.first)
                return a.first<b.first;
                return a.second<b.second;
            }
        };
        
        
        int count=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<mat[0].size();j++)
                {
                    if(mat[i][j]!=0)
                    count++;
                }

                pq.push({count,i});
                count=0;
        }
        for(int i=k;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
                {
                    if(mat[i][j]!=0)
                    count++;
                }
                if(pq.top().first>count)
                {
                    pq.pop();
                    pq.push({count,i});
                }
                count=0;
        }
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};