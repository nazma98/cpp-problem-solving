#include<bits/stdc++.h>
using namespace std;

void bfsRecursive(vector<vector<int>> &graph, int start) {
    vector<bool> visited(graph.size(), false);
    queue<int>q;
    visited[start] = true;
    q.push(start);

    bfsRecursiveHelper(graph, visited, q);
}

int main(){
    vector<vector<int>> graph = {
        {1, 2},        // Neighbors of node 0
        {0, 3, 4},     // Neighbors of node 1
        {0, 5},        // Neighbors of node 2
        {1},           // Neighbors of node 3
        {1},           // Neighbors of node 4
        {2}            // Neighbors of node 5
    };

    bfsRecursive(graph, 0);


    return 0;
}