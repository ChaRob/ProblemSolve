#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for (string str : str_list)
    {
        auto find = str.find(ex);
        if (find == string::npos)
            answer.append(str);
    }
    return answer;
}