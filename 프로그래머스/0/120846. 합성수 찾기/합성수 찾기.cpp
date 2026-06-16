#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7)
            continue;

        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            continue;
        answer++;
    }
    return answer;
}