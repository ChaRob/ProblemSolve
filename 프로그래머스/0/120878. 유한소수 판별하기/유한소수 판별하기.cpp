#include <string>
#include <vector>

using namespace std;

int Gcd(int a, int b)
{
    while (b > 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int solution(int a, int b) {
    int answer = 2;
    b /= Gcd(a, b);
    while (b % 2 == 0) b /= 2;
    while (b % 5 == 0) b /= 5;
    if (b == 1)
        answer = 1;
    return answer;
}