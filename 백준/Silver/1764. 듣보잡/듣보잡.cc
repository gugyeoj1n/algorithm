#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    map<string, int> base;
    string input;
    vector<string> answer;
    cin >> n >> m;

    for(int i = 0; i < n + m; i++)
    {
        cin >> input;
        base[input]++;

        if(base[input] > 1)
            answer.push_back(input);
    }

    sort(answer.begin(), answer.end());
    cout << answer.size() << "\n";
    
    for(const auto& e : answer)
        cout << e + "\n";
    
    return 0;
}