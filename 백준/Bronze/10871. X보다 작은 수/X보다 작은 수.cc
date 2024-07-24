#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, a;
    cin >> n >> x;
    vector<int> base;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a < x)
            base.push_back(a);
    }

    for(const auto& e : base)
        cout << e << "\n";

    return 0;
}