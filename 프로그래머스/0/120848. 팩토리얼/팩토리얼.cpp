#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, idx = 1;
    while (true)
    {
        int val = 1;
        for (int i = 1; i <= idx; i++)
        {
            val *= i;
        }
        if (val > n)
            break;
        answer = idx;
        idx++;
    }
    return answer;
}