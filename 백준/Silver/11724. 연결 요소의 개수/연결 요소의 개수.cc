#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[1001];
bool visited[1001];
int cnt = 0;

void dfs(int x) {
    visited[x] = true;
    for(int i = 0; i < graph[x].size(); i++) {
        int y = graph[x][i];
        if(!visited[y]) {
            dfs(y);
            cnt++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, cnt = 0;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            cnt++;
            dfs(i);
        }
    }

    cout << cnt;

    return 0;
}
