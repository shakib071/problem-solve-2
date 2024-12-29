#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

// Function to perform BFS and find connected components
void bfs(int start, vector<vector<int>>& graph, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> snow_drifts(n);
    for (int i = 0; i < n; ++i) {
        cin >> snow_drifts[i].first >> snow_drifts[i].second;
    }

    // Adjacency list for the graph
    vector<vector<int>> graph(n);

    // Build the graph
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (snow_drifts[i].first == snow_drifts[j].first || 
                snow_drifts[i].second == snow_drifts[j].second) {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }

    // Find connected components using BFS
    vector<bool> visited(n, false);
    int connected_components = 0;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            ++connected_components;
            bfs(i, graph, visited);
        }
    }

    // Result is connected_components - 1
    cout << connected_components - 1 << endl;

    return 0;
}
