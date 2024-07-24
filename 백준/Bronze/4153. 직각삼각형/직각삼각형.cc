#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, swap;

    while(true) {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;

        if(a > b) {
            swap = a;
            a = b;
            b = swap;
        }

        if(b > c) {
            swap = b;
            b = c;
            c = swap;
        }

        if(a * a + b * b == c * c) cout << "right\n";
        else cout << "wrong\n";
    }

    return 0;
}