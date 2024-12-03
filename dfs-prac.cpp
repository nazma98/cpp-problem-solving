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
    {0, 1, 2},
    {1, 2},
    {0, 3, 4},
    {0, 5, 6},
    {1},
    {1},
    {2},
    {2}
    };

    vector<bool>visited(graph.size(), false);

    dfsRecursive(graph, visited, 0);

    return 0;
}