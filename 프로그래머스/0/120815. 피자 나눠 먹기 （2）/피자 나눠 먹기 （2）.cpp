#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1, pizza;
    while (true)
    {
        pizza = answer * 6;
        if (pizza % n == 0)
            break;
        answer++;
    }
    return answer;
}