class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int>q;
        q.push(0);
        int n=rooms.size();
        vector<bool>visited(n,false);
        while(!q.empty()){
            int curr=q.front();
            visited[curr]=true;
            for(int i=0;i<rooms[curr].size();i++){
                if(visited[rooms[curr][i]]==false){
                    q.push(rooms[curr][i]);
                }
            }
            q.pop();
        }
        for(int i=0;i<visited.size();i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
};