#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for (int i = l; i <= r; i++)
    {
        int n = i;
        bool isCorrect = true;
        while (n > 0)
        {
            int tmp = n % 10;
            if (tmp != 0 && tmp != 5)
            {
                isCorrect = false;
                break;
            }
            n /= 10;
        }
        if (isCorrect)
            answer.push_back(i);
    }
    if (answer.size() == 0)
        answer.push_back(-1);
    return answer;
}