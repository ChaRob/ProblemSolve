#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0, a, b;
    string cal;
    istringstream iss(binomial);
    iss >> a >> cal >> b;
    if (cal == "+")
        answer = a + b;
    else if (cal == "-")
        answer = a - b;
    else if (cal == "*")
        answer = a * b;
    return answer;
}