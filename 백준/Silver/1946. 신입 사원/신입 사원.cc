#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int> a, pair<int, int> b) {
    return (a.first < b.first);
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T, t = 1, n, a, b;
    cin >> T;
    while (T >= t) {
        cin >> n;
        vector<pair<int,int>> arr;
        int cnt = 1;
        for (int i = 1; i <= n; i++) {
            cin >> a >> b;
            arr.push_back(make_pair(a, b));
        }
        sort(arr.begin(), arr.end(), cmp);
        int max_grade = arr[0].second;
        for (int i = 1; i < n; i++) {
            if (max_grade > arr[i].second) {
                max_grade = arr[i].second;
                cnt++;
            }
        }
        cout << cnt << "\n";
        t++;
    }
    return 0;
}