#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    auto find = str2.find(str1);
    if (find != string::npos)
        answer = 1;
    return answer;
}