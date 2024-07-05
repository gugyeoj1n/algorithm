#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, i = 0, j = 0, a = 0, b = 0;
    int x[50] = {0, }, y[50] = {0, };
    char c;

    cin >> n >> m;

    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        {
            cin >> c;
            if(c == 'X')
            {
                x[j] = 1;
                y[i] = 1;
            }
        }
    
    for(j = 0; j < m; j++)
        if(x[j] == 0) a++;
    for(i = 0; i < n; i++)
        if(y[i] == 0) b++;
    
    cout << max(a, b);
}