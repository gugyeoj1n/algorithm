#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;

    while(!(cin >> a >> b).eof()) {
        cout << a + b << "\n";
    }

    return 0;
}