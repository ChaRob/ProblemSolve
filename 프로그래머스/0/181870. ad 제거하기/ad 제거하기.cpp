#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (string s : strArr)
    {
        auto find = s.find("ad");
        if (find == string::npos)
            answer.push_back(s);
    }
    return answer;
}