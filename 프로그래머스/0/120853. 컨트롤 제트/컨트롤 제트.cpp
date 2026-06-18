#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    string token;
    int val;
    while (ss >> token)
    {
        if (token == "Z")
            answer -= val;
        else
        {
            val = stoi(token);
            answer += val;
        }
    }
    return answer;
}