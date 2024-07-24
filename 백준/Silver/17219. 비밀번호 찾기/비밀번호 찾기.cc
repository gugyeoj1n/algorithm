#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, string> hash;
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string address, password;
        cin >> address >> password;
        hash[address] = password;
    }

    for(int i = 0; i < m; i++) {
        string target;
        cin >> target;
        cout << hash[target] << "\n";
    }

    return 0;
}
