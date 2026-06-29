#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for (int i = 0; i < quiz.size(); i++)
    {
        stringstream ss(quiz[i]);
        int x, y, z; char cal, res;
        ss >> x >> cal >> y >> res >> z;
        if ((cal == '+' && x + y == z) ||
            (cal == '-' && x - y == z))
        {
            answer.push_back("O");
        }
        else
        {
            answer.push_back("X");
        }
    }
    return answer;
}