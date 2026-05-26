#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    auto find = myString.rfind(pat);
    if (find != string::npos)
        answer = myString.substr(0, find + pat.size());
    return answer;
}