#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    long long base[100001];

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        base[i] = base[i - 1] + x;
    }
        

    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        cout << base[b] - base[a - 1] << "\n";
    }

    return 0;
}
