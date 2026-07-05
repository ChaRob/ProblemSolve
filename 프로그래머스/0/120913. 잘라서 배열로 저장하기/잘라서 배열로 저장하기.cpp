#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int idx = 0;
    while (idx < my_str.size())
    {
        string tmp = my_str.substr(idx, n);
        answer.push_back(tmp);
        idx += n;
    }
    return answer;
}