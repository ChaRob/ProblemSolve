#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    string token;
    int nx = 0, nm = 0;
    bool mode = false; // false : +
    while (ss >> token)
    {
        if (token == "+")
        {
            mode = false;
            continue;
        }
        else if (token == "-")
        {
            mode = true;
            continue;
        }

        auto find = token.find('x');
        if (find != string::npos)
        {
            string tmp = token.substr(0, find);
            if (tmp == "")
                nx += mode ? -1 : 1;
            else
                nx += mode ? -stoi(tmp) : stoi(tmp);
        }
        else
        {
            nm += mode ? -stoi(token) : stoi(token);
        }
    }
    if (nx == 1)
        answer = "x";
    else if (nx == -1)
        answer = "-x";
    else if (nx == 0)
        answer = "";
    else
        answer = to_string(nx) + "x";
    if (nm > 0)
        answer += (answer != "" ? " + " : "") + to_string(nm);
    else if (nm < 0)
        answer += (answer != "" ? " - " : "") + to_string(abs(nm));
    return answer;
}