#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int a = 0;
    string cal;
    stringstream ss(my_string);
    ss >> answer;
    while (ss >> cal)
    {
        ss >> a;
        if (cal == "+")
            answer += a;
        else
            answer -= a;
    }
    return answer;
}