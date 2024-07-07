#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    string input;
    deque<int> queue;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(input == "push")
        {
            cin >> x;
            queue.push_back(x);
        }
        else if(input == "pop")
        {
            if(queue.empty()) 
                cout << -1 << "\n";
            else
            {
                cout << queue.front() << "\n";
                queue.pop_front();
            }
        }
        else if(input == "size")
        {
            cout << queue.size() << "\n";
        }
        else if(input == "empty")
        {
            cout << (queue.empty() ? 1 : 0) << "\n";
        }
        else if(input == "front")
        {
            cout << (queue.empty() ? -1 : queue.front()) << "\n";
        }
        else if(input == "back")
        {
            cout << (queue.empty() ? -1 : queue.back()) << "\n";
        }
    }
    
    return 0;
}
