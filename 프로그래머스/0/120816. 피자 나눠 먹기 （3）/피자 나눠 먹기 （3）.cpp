#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 1, pizza;
    while (true)
    {
        pizza = answer * slice;
        if (pizza / n > 0)
            break;
        answer++;
    }
    return answer;
}