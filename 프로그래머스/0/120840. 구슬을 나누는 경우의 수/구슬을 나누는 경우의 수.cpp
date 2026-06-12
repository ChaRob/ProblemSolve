#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    long long answer = 1, j = 0;
    for (int i = 0; i < share; i++)
    {
        answer *= balls - i;
        while (j < share && (answer % (share - j) == 0))
        {
            answer /= share - j++;
        }
    }
    return answer;
}