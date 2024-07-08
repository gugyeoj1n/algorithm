#include <iostream>
#include <vector>
using namespace std;

vector<int> tree[51];
int target, leaf = 0;

int dfs(int x)
{
    if(x == target) return -1;
    if(!tree[x].size())
    {
        leaf++;
        return 0;
    }

    for(int i = 0; i < tree[x].size(); i++)
    {
        int z = dfs(tree[x][i]);
        if(z == -1 && tree[x].size() == 1)
            leaf++;
    }

    return 0;
}

int main(void)
{
    int n, i, x, root;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(x == -1) root = i;
        else tree[x].push_back(i);
    }

    cin >> target;
    dfs(root);
    cout << leaf;
    return 0;
}