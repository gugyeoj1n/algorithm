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

    int i, x, n, m;
    map<int, int> card;
    vector<int> answer;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        card[x]++;
    }
    
    cin >> m;
    for(i = 0; i < m; i++)
    {
        cin >> x;
        answer.push_back(card[x]);
    }

    for(const int& e: answer)
    cout << e << " ";
    
    return 0;
}