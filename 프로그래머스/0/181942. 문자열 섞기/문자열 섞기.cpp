#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    int i = 0, j = 0;
    while (i < str1.size() && j < str2.size())
    {
        answer += str1[i++];
        answer += str2[j++];
    }
    while (i < str1.size())
        answer += str1[i++];
    while (j < str2.size())
        answer += str2[j++];
    return answer;
}