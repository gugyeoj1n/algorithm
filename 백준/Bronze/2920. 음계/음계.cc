#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int asc = 0;
    int desc = 0;

    for(int i = 1; i <= 8; i++) {
        cin >> n;
        if(n == i) asc++;
        else if(n == 9 - i) desc++;
    }

    if(asc == 8) cout << "ascending";
    else if(desc == 8) cout << "descending";
    else cout << "mixed";

    return 0;
}