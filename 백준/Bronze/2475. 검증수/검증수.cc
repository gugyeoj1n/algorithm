#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, base = 0;
    for(int i = 0; i < 5; i++) {
        cin >> n;
        base += n * n;
    }

    cout << base % 10;

    return 0;
}