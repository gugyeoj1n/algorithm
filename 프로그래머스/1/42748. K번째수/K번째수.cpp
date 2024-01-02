#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getVector(vector<int> array, vector<int> command);

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(const auto& cmd: commands)
        answer.push_back(getVector(array, cmd));
    return answer;
}

int getVector(vector<int> array, vector<int> command) {
    vector<int> slice(array.begin() + command[0] - 1, array.begin() + command[1]);
    sort(slice.begin(), slice.end());
    return slice[command[2] - 1];
}