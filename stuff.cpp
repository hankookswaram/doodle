#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <deque>
#include <cstdlib>
#include <unordered_map>
#include <cctype>

using namespace std;

vector<vector <int>> graph;
vector<bool> visited;
int inf_count = 0;

void dfs(int n) {
    visited[n] = true;
    for (int i : graph[n]) {
        if (!visited[i]) {
            inf_count++;
            dfs(i);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    graph.resize(n+1);
    visited.resize(n+1, false);

    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    cout << inf_count << '\n';

    return 0;
}