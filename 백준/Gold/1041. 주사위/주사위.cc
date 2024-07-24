#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int base = 0;
    int num[6];
    long long n, answer = 0;
    cin >> n;
    for(int i = 0; i < 6; i++) {
        cin >> num[i];
        answer += num[i];
        base = max(base, num[i]);
    }

    if(n == 1) {
        cout << answer - base;
    } else {
        answer = 0;
        num[0] = min(num[0], num[5]);
        num[1] = min(num[1], num[4]);
        num[2] = min(num[2], num[3]);

        sort(num, num + 3);
        int sum1 = num[0];
        int sum2 = sum1 + num[1];
        int sum3 = sum2 + num[2];

        answer += sum3 * 4 + sum2 * (4 * (n - 2) + 4 * (n - 1)) + sum1 * (4 * (n - 1) * (n - 2) + (n - 2) * (n - 2));

        cout << answer;
    }

    return 0;
}