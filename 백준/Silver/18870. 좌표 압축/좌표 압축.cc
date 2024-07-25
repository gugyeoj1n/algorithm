#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> base;
    int n, x;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        base.push_back(x);
    }

    vector<int> copied(base);
    sort(copied.begin(), copied.end());
    copied.erase(unique(copied.begin(), copied.end()), copied.end());

    for(int i = 0; i < n; i++)
        cout << lower_bound(copied.begin(), copied.end(), base[i]) - copied.begin() << " ";

    return 0;
}