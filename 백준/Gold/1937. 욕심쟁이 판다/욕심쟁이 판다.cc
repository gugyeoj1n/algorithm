#include <iostream>

using namespace std;

int n, answer;
int map[500][500];
int dp[500][500];
 
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

int max(int x, int y)
{
    return x > y ? x : y;
}

int move(int x, int y)
{
    if(dp[x][y] != 0) return dp[x][y];

    dp[x][y] = 1;

    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && ny >= 0 && nx < n && ny < n)
            if(map[x][y] < map[nx][ny])
                dp[x][y] = max(dp[x][y], move(nx, ny) + 1);
    }

    return dp[x][y];
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> map[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            answer = max(answer, move(i, j));

    cout << answer;
 
    return 0;
}
