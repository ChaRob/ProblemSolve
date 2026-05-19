#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int idx = n_str.find_first_not_of('0');
    for (int i = idx; i < n_str.size(); i++)
        answer.push_back(n_str[i]);
    return answer;
}