#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for (int i = 0; i < pat.size(); i++)
    {        
        if (pat[i] == 'A')
            pat[i] = 'B';
        else
            pat[i] = 'A';
    }
    auto find = myString.find(pat);
    if (find != string::npos)
        answer = 1;
    return answer;
}