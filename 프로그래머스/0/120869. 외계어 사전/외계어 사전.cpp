#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    for (string word : dic)
    {
        map<char, int> count;
        for (const string& s : spell)
        {
            count[s[0]] = 0;
        }

        for (char c : word)
        {
            count[c]++;
        }

        int counting = 0;
        for (const string& s : spell)
        {
            if (count[s[0]] == 1)
            {
                counting++;
            }
        }
        if (counting == count.size())
        {
            answer = 1;
            break;
        }
    }
    return answer;
}