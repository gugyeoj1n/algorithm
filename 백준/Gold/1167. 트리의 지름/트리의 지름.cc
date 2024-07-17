#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int V;
vector<pair<int, int>> v[100001];
bool visited[100001] = { false, };
int selected;
int dist = 0;

void dfs(int x, int cnt){
    if(dist < cnt){
        selected = x;
        dist = cnt;
    }

    for(int i = 0; i < v[x].size(); i++){
        int nx = v[x][i].first;
        int cost = v[x][i].second;

        if(!visited[nx]){
            visited[nx] = true;
            dfs(nx,cnt + cost);
            visited[nx] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> V;
    
    for(int i = 1; i <= V; i++){
        int s, e, c;
        cin >> s;
        
        while(true){
            cin >> e;
            if(e == -1) break;
            
            cin >> c;
            v[s].push_back({e, c});
        }
    }
    
    visited[1] = true;
    dfs(1, 0);
    
    fill(visited, visited + 100001, false);
    
    dist = 0;
    visited[selected] = true;
    
    dfs(selected, 0);
    cout << dist;
}