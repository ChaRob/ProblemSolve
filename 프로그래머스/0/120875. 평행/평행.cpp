#include <string>
#include <vector>

using namespace std;

vector<pair<int, int>> line1 = { {0, 1}, {0, 2}, {0, 3} };
vector<pair<int, int>> line2 = { {2, 3}, {1, 3}, {1, 2} };

double GetSlope(vector<int> a, vector<int> b)
{
    return (double)(a[1] - b[1]) / (a[0] - b[0]);
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    for (int dot = 0; dot < 3; dot++)
    {
        vector<int> a1 = dots[line1[dot].first];
        vector<int> a2 = dots[line1[dot].second];
        vector<int> b1 = dots[line2[dot].first];
        vector<int> b2 = dots[line2[dot].second];

        double slope1 = GetSlope(a1, a2);
        double slope2 = GetSlope(b1, b2);

        if (slope1 == slope2)
        {
            answer = 1;
            break;
        }
    }
    return answer;
}