#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for (size_t i = 0; i < strlist.size(); i++)
	{
        answer.push_back(strlist[i].size());
	}
    return answer;
}