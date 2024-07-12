#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> graph[1001];
bool visited[1001];
int answer;

void init() {
    for(int i = 0; i < 1001; i++)
        visited[i] = false;
}

void dfs(int x, int target, int dist) {
    if(x == target) {
        answer = dist;
        return;
    }

    visited[x] = true;
    for(int i = 0; i < graph[x].size(); i++) {
        int a = graph[x][i].first;
        int b = graph[x][i].second;

        if(!visited[a]) {
            visited[a] = true;
            dfs(a, target, (dist + b));
            visited[a] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n - 1; i++) {
        int x, y, dist;
        cin >> x >> y >> dist;
        graph[x].push_back(make_pair(y, dist));
        graph[y].push_back(make_pair(x, dist));
    }

    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        init();
        visited[x] = true;
        dfs(x, y, 0);
        visited[x] = false;

        cout << answer << "\n";
    }

    return 0;
}