#include<bits/stdc++.h>
using namespace std;

void dfsRecursive(vector<vector<int>> &graph, vector<bool>&visited, int node) {
    visited[node] = true;
    cout<<node<<" ";
    
    for(int neighbor : graph[node]) {
        if(!visited[neighbor]){
            dfsRecursive(graph, visited, neighbor);
        }
    }
}

int main(){
    vector<vector<int>>graph = {
        {1, 2},      // Node 0 is connected to 1 and 2
        {0, 3, 4},   // Node 1 is connected to 0, 3, and 4
        {0, 5, 6},   // Node 2 is connected to 0, 5, and 6
        {1},         // Node 3 is connected to 1
        {1},         // Node 4 is connected to 1
        {2},         // Node 5 is connected to 2
        {2} 
    };

    vector<bool>visited(graph.size(), false);

    dfsRecursive(graph, visited, 0);

    return 0;
}