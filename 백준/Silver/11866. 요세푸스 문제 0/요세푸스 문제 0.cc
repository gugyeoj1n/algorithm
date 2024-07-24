#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> circle;
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
        circle.push(i);

    cout << "<";

    while(!circle.empty()) {
        for(int i = 1; i < k; i++) {
            circle.push(circle.front());
            circle.pop();
        }

        cout << circle.front();
        if(circle.size() != 1)
            cout << ", ";
        circle.pop();
    }

    cout << ">";
    return 0;
}