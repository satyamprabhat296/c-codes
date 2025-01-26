#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
// In order to have a topological sorting the graph must not contain any cycles.
//  Directed acylic graph using dfs approach

// Here’s a step-by-step algorithm for topological sorting using Depth First Search (DFS):

// Create a graph with n vertices and m-directed edges.
// Initialize a stack and a visited array of size n.
// For each unvisited vertex in the graph, do the following:
// Call the DFS function with the vertex as the parameter.
// In the DFS function, mark the vertex as visited and recursively call the DFS function for all unvisited neighbors of the vertex.
// Once all the neighbors have been visited, push the vertex onto the stack.
// After all, vertices have been visited, pop elements from the stack and append them to the output list until the stack is empty.
// The resulting list is the topologically sorted order of the graph.


void toposort(int node,unordered_map<int,bool>&visted,stack<int> &s,unorderd_map<int,list><int>){
    visited[node]=1;
    for(auto neighbour:adj[node]){
        if(!visited[neighbour]){
            toposort(neighbour,visited,s,adj);

        }
        //important
        s.push(node);
    }
    vector<int>topologicalsort(vector<vector<int>>&edges,int v,int e){
        // create adj list
        unorderd_map<int,list<int>adj;
        for(int i=0;i<e;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
        }
        // call dfs toposort
        unordered_map<int,bool>visited;
        stack<int>s;
        for(int i=0;i<n;i++){
            if(!visted[i]){
                toposort(i,visited,s,adj);
            }
            vector<int>ans;
            while(!s.empty()){
                ans.push_back(s.top());
                s.pop();
            }
            return ans;
        }
    
}