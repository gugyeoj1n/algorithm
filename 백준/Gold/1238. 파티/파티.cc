#include <iostream>
#include <queue>
#include <vector>
#include <string.h>
using namespace std;

int n, m, x;
vector<pair<int, int>> base[1002];
int dist[1002];
int result;

void findDist(int start, int d)
{
    memset(dist, 98765432, sizeof(dist));
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> queue;
    queue.push({ 0, start });
    dist[start] = 0;

    while(!queue.empty())
    {
        int currentDist = queue.top().first;
        int current = queue.top().second;
        queue.pop();

        if(current == d)
        {
            result = dist[current];
            break;
        }

        for(int i = 0; i < base[current].size(); i++)
        {
            int next = base[current][i].first;
            int nextDist = base[current][i].second + currentDist;
            if(dist[next] > nextDist)
            {
                dist[next] = nextDist;
                queue.push({ nextDist, next });
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m >> x;

    int start, end, time;
    for(int i = 0; i < m; i++)
    {
        cin >> start >> end >> time;
        base[start].push_back({ end, time });
    }

    int go, back, answer = 0;
    for(int i = 1; i <= n; i++)
    {
        findDist(i, x);
        go = result;
        findDist(x, i);
        back = result;

        if(answer < go + back)
            answer = go + back;
    }

    cout << answer;
    return 0;
}
