#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r = 31, M = 1234567891, l, hash = 0;
    string target;
    cin >> l >> target;

    for(int i = 0; i < l; i++) {
        hash += ((target[i] - 96) * (int) pow(r, i)) % M;
    }

    cout << hash;

    return 0;
}