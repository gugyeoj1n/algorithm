#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string base;
    cin >> base;

    string target;
    int result = 0;
    bool flag = false;

    for(int i = 0; i <= base.size(); i++)
    {
        if(base[i] == '-' || base[i] == '+' || i == base.size())
        {
            result += flag ? -stoi(target) : stoi(target);
            target = "";
        } else
            target += base[i];

        if(base[i] == '-')
            flag = true;
    }

    cout << result;
    return 0;
}
