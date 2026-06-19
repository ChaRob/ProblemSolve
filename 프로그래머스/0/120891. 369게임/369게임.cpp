#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    while (order > 0)
    {
        int i = order % 10;
        if (i != 0 && i % 3 == 0)
            answer++;
        order /= 10;
    }
    return answer;
}