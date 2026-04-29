#include <string>
#include <vector>
using namespace std;

int solution(string ineq, string eq, int n, int m) {
    string q = ineq.append(eq);
    if (q == ">=")
        return (n >= m);
    else if (q == "<=")
        return (n <= m);
    else if (q == ">!")
        return (n > m);
    else if (q == "<!")
        return (n < m);
    return 0;
}