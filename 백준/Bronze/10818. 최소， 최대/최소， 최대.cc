#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    int max = -1000001, min = 1000001;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x > max) max = x;
        if(x < min) min = x;
    }

    cout << min << " " << max;

    return 0;
}