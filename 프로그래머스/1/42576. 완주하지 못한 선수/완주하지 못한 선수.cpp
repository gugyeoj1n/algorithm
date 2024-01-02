#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> marathon;
    
    for(const auto& part : participant) {
        if(marathon.find(part) == marathon.end())
            marathon.insert({ part, 0 });
        else
            marathon[part]++;
    }
    
    for(const auto& comp : completion)
        marathon[comp]--;
    
    for(const auto& m : marathon)
        if(m.second == 0) answer = m.first;
    
    return answer;
}