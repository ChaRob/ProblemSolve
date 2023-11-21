#include <iostream>
#include <deque>
#include <string>
using namespace std;

void DequeEraseFront(deque<char>* que) {
    while (!que->empty()) {
        cout << que->front();
        que->pop_front();
    }
}

void DequeEraseBack(deque<char>* que) {
    while (!que->empty()) {
        cout << que->back();
        que->pop_back();
    }
}

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string s;
    deque<char> que;
    getline(cin, s);
    int i = 0;
    while (i != s.size()) {
        if (s[i] == '<') {
            DequeEraseBack(&que);
            while (true) {
                que.push_back(s[i]);
                if (s[i] == '>') {
                    i++;
                    break;
                }
                i++;
            }
            DequeEraseFront(&que);
        }
        else {
            if (i + 1 == s.size()) {
                cout << s[i];
                DequeEraseBack(&que);
                break;
            }
            else if (s[i] == ' ') {
                DequeEraseBack(&que);
                cout << ' ';
            }
            else {
                que.push_back(s[i]);
            }
            i++;
        }
    }


    return 0;
}