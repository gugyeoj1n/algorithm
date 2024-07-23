#include <iostream>
#include <queue>
using namespace std;

int map[102] = { 0 };
bool visited[102] = { 0 };
int n, m;

void bfs(int a, int b)
{
    queue<pair<int, int>> queue;
    queue.push({ a, b });

    while(!queue.empty())
    {
        int current = queue.front().first;
        int count = queue.front().second;
        queue.pop();

        for(int i = 1; i <= 6; i++)
        {
            int next = current + i;
            if(next == 100)
            {
                cout << count + 1;
                return;
            }
            else
            {
                while(map[next] != 0)
                {
                    next = map[next];
                }

                if(!visited[next])
                {
                    queue.push({ next, count + 1 });
                    visited[next] = true;
                }
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    int x, y;
    for(int i = 0; i < n + m; i++)
    {
        cin >> x >> y;
        map[x] = y;
    }

    bfs(1, 0);
    return 0;
}
