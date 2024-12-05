#include<bits/stdc++.h>
using namespace std;

void bfsRecursiveHelper(vector<vector<int>> &graph, vector<bool> &visited, queue<int> &q) {
    if(q.empty()) {
        return;
    }

    int node = q.front();
    q.pop();
    cout<<"Visited node "<<node<<endl;

    for(int neighbor: graph[node]){
        if(!visited[neighbor]) {
            visited[neighbor] = true;
            q.push(neighbor);
        }
    }
    bfsRecursiveHelper(graph, visited, q);
}

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