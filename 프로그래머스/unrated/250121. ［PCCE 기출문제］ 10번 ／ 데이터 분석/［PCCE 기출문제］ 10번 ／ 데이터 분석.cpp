#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    int filterCode = (ext[0] == 'c') ? 0 : ((ext[0] == 'd') ? 1 : ((ext[0] == 'm') ? 2 : 3));
    int sortCode = (sort_by[0] == 'c') ? 0 : ((sort_by[0] == 'd') ? 1 : ((sort_by[0] == 'm') ? 2 : 3));
    
    vector<vector<int>> answer;
    
    for (const auto& d : data)
        if (d[filterCode] < val_ext) answer.push_back(d);
    
    sort(answer.begin(), answer.end(), [sortCode](const vector<int>& a, const vector<int>& b) {
        return a[sortCode] < b[sortCode];
    });

    return answer;
}
