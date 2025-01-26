// using BFS
bool iscyclicbfs(int src,unordered_map<int,bool>&visited,unordered_map<int,list<int> && unordered_map<int,int>parent;)
{
parent[src]=-1;
visited[src]=1;
queue<int>q;
q.push(size);
while(!q.empty()){
    int front=q.front();
    q.pop();
    for(auto neighbour:adj[front]){
        if(visited[neighbour]==true && neighbour!=parent[front]){
            return true;
        }
        else if (!visted[neighbour]){
            q.push(neighbour);
            visted[neighbour]=1;
            parent[neighbour]=front;
        }
    }

}
return false;
}
string cycledetection(vector<vector<int>&edges,int n,int m){
    // create adj list
    unordered_map<int,list<int>adj;
    for(int i=0;i<m;i++){
        int u= edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj(v).push_back(u);
    }
    unordered_map<int,bool>visited
;
for(int i=0;i<n;i++){
    if(!visited[i]){
        bool ans= iscyclicbfs(i,visited,adj);
        if(ans==1){
            return"yes";
        }
        return "No"
    }
}
}

//  Using DFS

bool iscyclicDFS(int node,int parent,unordered_map<int,list<int>){
    visited[node]=true;
    for(auto neighbour:adj[node]){
        if(!visited[neighbour]){
            bool cycledetected=iscyclicDFS(neighbour,node,visted,adj);
            if(cycledetected)
            return true;
        }
        else if(neighbour!=parent){
            return true;
        }

return false;
    }
}