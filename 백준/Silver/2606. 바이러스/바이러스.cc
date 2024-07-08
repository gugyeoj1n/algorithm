#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];
bool visited[101];
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

    int n, m, i, x, y;
    cin >> n >> m;

    for(i = 0; i < m; i++) {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    dfs(1);
    cout << cnt << "\n";

    return 0;
}
