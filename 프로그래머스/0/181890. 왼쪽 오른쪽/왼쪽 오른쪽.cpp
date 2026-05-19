#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int targetIndex = 0, mode = 0;
    for (int i = 0; i < str_list.size(); i++)
    {
        if (str_list[i] == "l")
        {
            targetIndex = i;
            mode = 0;
            break;
        }
        if (str_list[i] == "r")
        {
            targetIndex = i;
            mode = 1;
            break;
        }
    }
    if (mode == 0)
    {
        for (int i = 0; i < targetIndex; i++)
            answer.push_back(str_list[i]);
    }
    if (mode == 1)
        for (int i = targetIndex + 1; i < str_list.size(); i++)
            answer.push_back(str_list[i]);
    return answer;
}