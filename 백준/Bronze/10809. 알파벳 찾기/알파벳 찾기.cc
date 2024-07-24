#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    string alp = "abcdefghijklmnopqrstuvwxyz";

    cin >> word;
    for(int i = 0; i < alp.length(); i++)
        cout << (int) word.find(alp[i]) << " ";

    return 0;
}