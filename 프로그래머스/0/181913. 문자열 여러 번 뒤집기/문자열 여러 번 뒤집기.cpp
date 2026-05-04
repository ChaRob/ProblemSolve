#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    for(int i = 0; i < queries.size(); i++)
    {
        int s = queries[i][0];
        int e = queries[i][1];
        string tmp = answer;
        for (int j = e; j >= s; j--)
        {
            tmp[j] = answer[s - j + e];
        }
        answer = tmp;
    }
    return answer;
}