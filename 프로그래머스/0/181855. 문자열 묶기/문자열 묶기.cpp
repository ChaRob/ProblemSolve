#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    int lengthes[31] = {};
    for (string s : strArr)
        lengthes[s.size()]++;
    for (int i = 1; i <= 30; i++)
        answer = (answer > lengthes[i]) ? answer : lengthes[i];
    return answer;
}