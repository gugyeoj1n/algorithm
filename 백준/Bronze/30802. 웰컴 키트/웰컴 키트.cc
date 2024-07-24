#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, size = 0, base[6], t, p, pen;
    cin >> n;

    for(int i = 0; i < 6; i++)
        cin >> base[i];

    cin >> t >> p;

    for(int i = 0; i < 6; i++)
        size += base[i] / t + (base[i] % t > 0);

    cout << size << "\n" << n / p << " " << n % p;
    return 0;
}