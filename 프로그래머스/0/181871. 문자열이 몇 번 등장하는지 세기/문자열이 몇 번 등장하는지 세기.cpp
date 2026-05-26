#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for (int i = 0; i <= myString.size() - pat.size(); i++)
    {
        bool check = true;
        for (int j = 0; j < pat.size(); j++)
        {
            if (myString[i + j] != pat[j])
            {
                check = false;
                break;
            }
        }
        if (check)
            answer++;
    }
    return answer;
}