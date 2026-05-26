#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0, a, b;
    istringstream iss(binomial);
    string cal, tmp;
    iss >> tmp;
    a = stoi(tmp);
    iss >> cal >> tmp;
    b = stoi(tmp);
    if (cal == "+")
        answer = a + b;
    else if (cal == "-")
        answer = a - b;
    else if (cal == "*")
        answer = a * b;
    return answer;
}