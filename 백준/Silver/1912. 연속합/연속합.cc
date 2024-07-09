#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, answer = 0;
    cin >> n;

    vector<int> base(n + 1);

    for(int i = 0; i < n; i++)
        cin >> base[i];

    answer = base[0];
    
    for(int i = 1; i < n; i++)
    {
        if(base[i - 1] > 0) base[i] += base[i - 1];
        if(base[i] > answer) answer = base[i];
    }

    cout << answer;
    
    return 0;
}
