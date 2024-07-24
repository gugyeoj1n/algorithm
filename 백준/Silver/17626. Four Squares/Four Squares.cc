#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    dp[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        int minValue = INT_MAX;
        for(int j = 1; j * j <= i; j++)
        {
            int x = i - j * j;
            minValue = min(minValue, dp[x]);
        }
        dp[i] = minValue + 1;
    }

    cout << dp[n];
    return 0;
}
