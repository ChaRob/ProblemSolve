#include <string>
#include <vector>

using namespace std;

string StrLower(string str)
{
    for (int i = 0; i < str.size(); i++)
        str[i] = tolower(str[i]);
    return str;
}

string StrUpper(string str)
{
    for (int i = 0; i < str.size(); i++)
        str[i] = toupper(str[i]);
    return str;
}

vector<string> solution(vector<string> strArr) {
    vector<string> answer(strArr.size());
    for (int i = 0; i < strArr.size(); i++)
    {
        if (i % 2 == 0)
            answer[i] = StrLower(strArr[i]);
        else
            answer[i] = StrUpper(strArr[i]);
    }
    return answer;
}