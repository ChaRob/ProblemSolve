#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for (int i = 0; i < my_strings.size(); i++)
    {
        string subStr = my_strings[i].substr(parts[i][0], parts[i][1] - parts[i][0] + 1);
        answer.append(subStr);
    }
    return answer;
}