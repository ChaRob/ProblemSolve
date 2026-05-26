#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string tmp = "";
    for (int i = 0; i < myString.size(); i++)
    {
        if (myString[i] == 'x')
        {
            if (tmp != "")
                answer.push_back(tmp);
            tmp = "";
        }
        else
            tmp.push_back(myString[i]);
    }
    if (tmp != "")
        answer.push_back(tmp);
    sort(answer.begin(), answer.end());
    return answer;
}