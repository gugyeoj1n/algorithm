#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, h, w, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> h >> w >> n;
        int floor = 0, room = 1;
        for(int j = 1; j <= n; j++) {
            floor++;
            if(floor > h) {
                floor = 1;
                room++;
            }
        }

        cout << floor << (room < 10 ? "0" : "") << room << "\n";
    }

    return 0;
}