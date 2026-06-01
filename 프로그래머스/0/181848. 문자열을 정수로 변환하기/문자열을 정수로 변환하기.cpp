#include <string>
#include <vector>

using namespace std;

int solution(string n_str) {
    int answer = 0;
    for (char c : n_str)
    {
        answer = answer * 10 + c - '0';
    }
    return answer;
}