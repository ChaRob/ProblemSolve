#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    for(auto a : arr)
        answer = answer + a;
    return answer;
}