#include <iostream>
using namespace std;

int arr[129][129];
int white = 0;
int blue = 0;

void cut(int x, int y, int n) {
    bool isDiff = false;
    int first = arr[x][y];

    for(int i = x; i < x + n; i++)
        for(int j = y; j < y + n; j++) {
            if(first != arr[i][j]) {
                isDiff = true;
                break;
            }
        }

    if(isDiff) {
        cut(x, y, n / 2);
        cut(x + n / 2, y, n / 2);
        cut(x, y + n / 2, n / 2);
        cut(x + n / 2, y + n / 2, n / 2);
    } else {
        if(first) blue++;
        else white++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    cut(0, 0, n);
    cout << white << "\n" << blue;

    return 0;
}