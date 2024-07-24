#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int l;
    long long hash = 0, r = 1, M = 1234567891;
    string target;
    cin >> l >> target;

    for(int i = 0; i < l; i++) {
        hash += ((target[i] - 96) * r) % M;
        hash %= M;
        r = (r * 31) % M;
    }

    cout << hash;

    return 0;
}