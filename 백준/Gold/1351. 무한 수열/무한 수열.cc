#include <iostream>
#include <unordered_map>
using namespace std;

long long n, p, q;
unordered_map<long long, long long> m;

long long rec(long long x) {
    long long a;

    if(m.find(x) != m.end())
        return m[x];

    a = rec(x / p) + rec(x / q);
    m[x] = a;
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> p >> q;
    m[0] = 1;
    if(n == 0) cout << 1;
    else cout << rec(n / p) + rec(n / q);


    return 0;
}