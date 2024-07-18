#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int n, m, answer;
int map[50][50];
bool visited[50][50];
int dp[50][50];
 
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

int dfs(int x, int y)
{
    if(x < 0 || y < 0 || x >= n || y >= m || map[x][y] == 0)
        return 0;

    if(visited[x][y])
    {
        cout << -1;
        exit(0);
    }

    if(dp[x][y] != -1)
        return dp[x][y];

    visited[x][y] = true;
    dp[x][y] = 0;

    for(int i = 0; i < 4; i++)
    {
        int nx = x + map[x][y] * dx[i];
        int ny = y + map[x][y] * dy[i];
        dp[x][y] = max(dp[x][y], dfs(nx, ny) + 1);
    }

    visited[x][y] = false;
    return dp[x][y];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        string board;
        cin >> board;
        for(int j = 0; j < board.length(); j++)
            map[i][j] = board[j] == 'H' ? 0 : board[j] - '0';
    }

    memset(dp, -1, sizeof(dp));
    answer = dfs(0, 0);
    cout << answer;
    return 0;
}
