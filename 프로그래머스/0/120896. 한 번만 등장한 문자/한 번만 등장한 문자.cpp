#include <string>
#include <vector>

using namespace std;

int alpha[26] = {0};

string solution(string s) {
    string answer = "";
    for (char c : s)
    {
        alpha[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 1)
            answer.push_back('a' + i);
    }
    return answer;
}