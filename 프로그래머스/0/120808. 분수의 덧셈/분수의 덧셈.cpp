#include <string>
#include <vector>

using namespace std;

int Gcd(int a, int b)
{
    int tmp;
    while (b > 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer = {numer1*denom2 + denom1*numer2, denom1*denom2};
    int gcdVal = Gcd(answer[0], answer[1]);
    answer[0] /= gcdVal;
    answer[1] /= gcdVal;
    return answer;
}