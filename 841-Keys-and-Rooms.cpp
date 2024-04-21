class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n,false);
        dfs(0,rooms,visited);
        for(bool visit: visited){
            if(!visit){
                return false;
            }
        }
        return true;
    }
    void dfs(int curr, const vector<vector<int>>& rooms,vector<bool>& visited){
        visited[curr]=true;
        for(int x:rooms[curr]){
            if(!visited[x]){
                dfs(x,rooms,visited);
            }
        }
    }
};