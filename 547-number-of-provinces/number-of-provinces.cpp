class Solution {
public:

    void dfs(vector<vector<int>>& isConnected,int start,vector<int>&visited)
    {
        visited[start]=1;
        for(int i=0;i<isConnected.size();i++)
        {
            int j = isConnected[i][start];
            if(!visited[i]&&j==1)
            {
                //visited[i]=1;
                dfs(isConnected,i,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m = isConnected.size();
        vector<int> visited(m,0);
        
        int count=0;
        for(int i=0;i<m;i++)
        {
            if(!visited[i])
            {
                count++;
                dfs(isConnected,i,visited);
            }
        }
        return count;
    }
};