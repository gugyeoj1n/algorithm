#include <iostream>
#include <algorithm>
using namespace std;

int dp[301];
int map[301];
int n;

int getMax(int a, int b) {
    return a > b ? a : b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> map[i];

    dp[1] = map[1];
    dp[2] = map[1] + map[2];
    dp[3] = getMax(map[3] + map[1], map[3] + map[2]);

    for(int i = 4; i <= n; i++)
        dp[i] = getMax(dp[i - 2] + map[i], dp[i - 3] + map[i - 1] + map[i]);

    cout << dp[n];

    return 0;
}