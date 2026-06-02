#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    auto find = my_string.find(target);
    if (find != string::npos)
        answer = 1;    
    return answer;
}