#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string text[3];
    for(int i = 0; i < 3; i++) {
        cin >> text[i];
        if(text[i][text[i].size() - 1] != 'z') {
            int target = stoi(text[i]) + 3 - i;
            if(target % 3 == 0 && target % 5 == 0)
                cout << "FizzBuzz";
            else if(target % 3 != 0 && target % 5 == 0)
                cout << "Buzz";
            else if(target % 3 == 0 && target % 5 != 0)
                cout << "Fizz";
            else
                cout << target;

            break;
        }
    }

    return 0;
}