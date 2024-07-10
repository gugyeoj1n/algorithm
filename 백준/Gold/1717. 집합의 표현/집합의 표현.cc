#include <iostream>

using namespace std;

int n, m;
int parent[1000001];

int getParent(int x)
{
    if(parent[x] == x) return x;
    return parent[x] = getParent(parent[x]);
}

void unionParent(int x, int y) {
    x = getParent(x);
    y = getParent(y);

    if(x > y) parent[x] = y;
    else parent[y] = x;
}

void findParent(int x, int y)
{
    x = getParent(x);
    y = getParent(y);

    if(x == y) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        parent[i] = i;
    
    for(int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(!a) unionParent(b, c);
        else findParent(b, c);
    }
    
    return 0;
}