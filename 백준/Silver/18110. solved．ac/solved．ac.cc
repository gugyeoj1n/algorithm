#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> op;
    int n, x, count = 0;
    cin >> n;

    if(n == 0) {
        cout << 0;
        return 0;
    }

    for(int i = 0; i < n; i++) {
        cin >> x;
        op.push_back(x);
    }

    sort(op.begin(), op.end());
    int exclude = round(n * 0.15);
    double sum = 0;

    for(int i = exclude; i < n - exclude; i++) {
        count++;
        sum += op[i];
    }

    cout << round(sum / count);

    return 0;
}