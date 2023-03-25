#include<iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int alpha[26] = { 0 }, maxalpha = 0, maxindex = 0;
    bool check = false;
    char s;
    while (1) {
        cin >> s;
        if (cin.eof()) {
            break;
        }
        if (s < 91) {
            alpha[int(s - 'A')]++;
        }
        else {
            alpha[int(s - 'a')]++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (maxalpha < alpha[i]) {
            maxindex = i;
            maxalpha = alpha[i];
        }
    }
    for (int i = 0; i < 26; i++) {
        if (maxalpha == alpha[i] && maxindex != i) {
            check = true;
        }
    }
    if (check) {
        cout << "?";
    }
    else {
        cout << char(maxindex + 65);
    }
    return 0;
}