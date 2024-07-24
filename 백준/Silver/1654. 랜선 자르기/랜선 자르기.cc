#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int K, N;
    cin >> K >> N;

    vector<int> lan(K);
    int max_len = 0;
    for (int i = 0; i < K; i++) {
        cin >> lan[i];
        max_len = max(max_len, lan[i]);
    }

    long long left = 1;
    long long right = max_len;
    long long mid = (left + right) / 2;

    while (left <= right) {
        int count = 0;
        for (int i = 0; i < K; i++)
            count += lan[i] / mid;

        if (count >= N)
            left = mid + 1;
        else
            right = mid - 1;

        mid = (left + right) / 2;
    }

    cout << mid << "\n";
    return 0;
}