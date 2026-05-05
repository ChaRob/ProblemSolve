#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    auto find = my_string.rfind(is_suffix);
    if (find != string::npos)
    {
        string sub = my_string.substr(find);
        if (sub == is_suffix)
            answer = 1;
    }
    return answer;
}