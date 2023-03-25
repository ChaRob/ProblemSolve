#include<iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    char s[4] = {}, fs[4] = {};
    int n, cnt, fcnt = 0;
    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> fs[j];
        }
        cnt = 0;
        for (int j = 0; j < 4; j++) {
            if (s[j] == fs[j]) {
                cnt++;
            }
            else {
                break;
            }
        }
        if (cnt == 4) {
            fcnt++;
        }
    }
    cout << fcnt;
    return 0;
}