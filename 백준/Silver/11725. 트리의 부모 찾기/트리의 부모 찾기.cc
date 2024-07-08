#include <iostream>
#include <vector>

using namespace std;

int N;
int parent[100001];
bool visited[100001];
vector<int> tree[100001];

void dfs(int k) {
    visited[k] = true;
    for(int i = 0; i < tree[k].size(); i++) {
        int next = tree[k][i];
        if(!visited[next]) {
            parent[next] = k;
            dfs(next);
        }
    }
}

int main() {
    cin >> N;

    for(int i = 1; i < N; i++) {
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    dfs(1);

    for(int i = 2; i <= N; i++)
        cout << parent[i] << "\n";
}
