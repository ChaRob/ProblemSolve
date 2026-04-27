#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int left = stoi(to_string(a) + to_string(b));
    int right = 2 * a * b;
    if (left >= right)
        return left;
    return right;
}