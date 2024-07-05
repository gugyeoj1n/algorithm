#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return (a.second == b.second) ? a.first < b.first : a.second < b.second;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n;
    vector<pair<int, int>> base;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        base.push_back(make_pair(a, b));
    }

    sort(base.begin(), base.end(), comp);

    for(const auto& e : base)
        cout << e.first << " " << e.second << "\n";

    return 0;
}