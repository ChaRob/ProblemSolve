#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    set<char> bucket;
    for (char c : my_string)
    {
        if (bucket.insert(c).second)
            answer.push_back(c);
    }
    return answer;
}