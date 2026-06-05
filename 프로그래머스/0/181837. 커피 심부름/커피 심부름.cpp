#include <string>
#include <vector>

using namespace std;

int solution(vector<string> orders) {
    int answer = 0;
    for (string order : orders)
    {
        auto isLatte = order.find("latte");
        if (isLatte != string::npos)
        {
            answer += 5000;
            continue;
        }
        answer += 4500;
    }
    return answer;
}