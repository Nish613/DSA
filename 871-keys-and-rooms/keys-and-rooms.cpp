class Solution {
public:

    void dfs(vector<vector<int>>& rooms,int start,vector<int> &visited)
    {
        visited[start]=1;
        for(int i=0;i<rooms[start].size();i++)
        {
            int j=rooms[start][i];
            if(!visited[j])
            {
                visited[j]=1;
                dfs(rooms,j,visited);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n,0);
        
        dfs(rooms,0,visited);
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
               return false;

            }
        }
        return true;
    }
};