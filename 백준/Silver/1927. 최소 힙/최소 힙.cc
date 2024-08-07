#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> heap;
    int n, x;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(!x) {
            if(heap.empty()) {
                cout << 0 << "\n";
            } else {
                cout << heap.top() << "\n";
                heap.pop();
            }
        } else {
            heap.push(x);
        }
    }

    return 0;
}