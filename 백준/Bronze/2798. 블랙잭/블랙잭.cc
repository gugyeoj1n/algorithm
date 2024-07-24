#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, max = 0;
    cin >> n >> m;

    int card[n];
    for(int i = 0; i < n; i++)
        cin >> card[i];

    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                int x = card[i] + card[j] + card[k];
                if(x > max && x <= m) max = x;
            }
        }
    }

    cout << max;

    return 0;
}