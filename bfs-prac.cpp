#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &graph, int start){
    vector<bool>visited(graph.size(), false);
    queue<int>q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";

        for(int neighbor : graph[node]) {
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
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

    bfs(graph, 0);

    return 0;
}