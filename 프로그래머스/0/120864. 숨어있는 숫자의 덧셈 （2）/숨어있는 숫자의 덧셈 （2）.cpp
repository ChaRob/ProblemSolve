#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string bucket;
    for (char c : my_string)
    {
        if (c >= '0' && c <= '9')
            bucket.push_back(c);
        else if (bucket != "")
        {
            answer += stoi(bucket);
            bucket = "";
        }
    }
    if (bucket != "")
    {
        answer += stoi(bucket);
    }
    return answer;
}