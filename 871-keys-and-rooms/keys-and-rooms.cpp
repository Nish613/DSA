class Solution {
public:

    void dfs(vector<vector<int>>& rooms,int start,vector<int> &visited)
    {
        visited[start]=1;
        for(int i:rooms[start])
        {
            if(!visited[i])
            {
                visited[i]=1;
                dfs(rooms,i,visited);

            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n,0);
        dfs(rooms,0,visited);
        for(int i:visited)
        {
            if(i==0)
            return false;
        }
        return true;
    }

};