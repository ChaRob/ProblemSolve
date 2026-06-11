#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    while (age > 0)
    {
        int i = age % 10;
        answer = (char)('a' + i) + answer;
        age /= 10;
    }
    return answer;
}