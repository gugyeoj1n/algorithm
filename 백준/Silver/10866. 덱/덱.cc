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

    int n, i, x;
    string input;
    vector<int> deque;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> input;
        if(input == "push_back")
        {
            cin >> x;
            deque.push_back(x);
        } else if(input == "push_front")
        {
            cin >> x;
            deque.insert(deque.begin(), x);
        } else if(input == "pop_front")
        {
            if(deque.empty())
            {
                cout << -1 << "\n";
            } else
            {
                cout << deque[0] << "\n";
                deque.erase(deque.begin());
            }
        } else if(input == "pop_back")
        {
            if(deque.empty())
            {
                cout << -1 << "\n";
            } else
            {
                cout << deque[deque.size() - 1] << "\n";
                deque.pop_back();
            }
        } else if(input == "size")
        {
            cout << deque.size() << "\n";
        } else if(input == "empty")
        {
            cout << (deque.empty() ? 1 : 0) << "\n";
        } else if(input == "front")
        {
            cout << (deque.empty() ? -1 : deque[0]) << "\n";
        } else
        {
            cout << (deque.empty() ? -1 : deque[deque.size() - 1]) << "\n";
        }
    }
    
    return 0;
}