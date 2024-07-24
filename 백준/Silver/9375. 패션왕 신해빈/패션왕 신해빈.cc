#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        map<string, int> clothes;
        string name, category;
        
        for(int j = 0; j < n; j++)
        {
            cin >> name >> category;
            if(clothes.find(category) == clothes.end())
                clothes.insert({ category, 1 });
            else
                clothes[category]++;
        }
        
        int answer = 1;

        for(auto e: clothes)
            answer *= e.second + 1;

        cout << answer - 1 << "\n";
    }

    return 0;
}
