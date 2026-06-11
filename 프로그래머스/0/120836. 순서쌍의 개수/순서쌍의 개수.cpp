#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        int j = n / i;
        if (i * j == n)
            answer++;
    }
    return answer;
}