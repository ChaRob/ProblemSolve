#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

map<string, string> morse = {
    {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},{".","e"},{"..-.","f"},
    {"--.","g"},{"....","h"},{"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
    {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},{"--.-","q"},{".-.","r"},
    {"...","s"},{"-","t"},{"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
    {"-.--","y"},{"--..","z"}
};

string solution(string letter) {
    string answer = "", token;
    stringstream ss(letter);
    while (ss >> token)
    {
        answer.append(morse[token]);
    }
    return answer;
}