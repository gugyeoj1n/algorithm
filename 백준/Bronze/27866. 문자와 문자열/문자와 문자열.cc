#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;
    int n;
    cin >> n;
    cout << a[n - 1];

    return 0;
}