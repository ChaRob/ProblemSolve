#include<iostream>
#include<deque>
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T, t = 1, n, m, inputnum;
    cin >> T;
    while (T >= t) {
        cin >> n >> m;
        deque<pair<int, int>> que;
        int max_importance = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> inputnum;
            que.push_back(make_pair(i, inputnum));
        }
        while (!que.empty()) {
            for (int i = 0; i < que.size(); i++) {
                max_importance = (max_importance > que[i].second) ? max_importance : que[i].second;
            }
            int x = que[0].first, num = que[0].second;
            que.pop_front();
            if (num == max_importance) {
                cnt++;
                max_importance = 0;
                if (x == m) {
                    break;
                }
            }
            else {
                que.push_back(make_pair(x, num));
            }
        }
        cout << cnt << "\n";
        t++;
    }
    return 0;
}