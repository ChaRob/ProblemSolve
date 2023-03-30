#include<iostream>
using namespace std;
int cnt;
 
void permu(int k, int sum, int *A, bool *p, int sq, int n) {
    if (k == sum) {
        cnt++;
    }
    else if (k > sum) {
        for (int i = sq; i < n; i++) {
            if (!p[i]) {
                p[i] = true;
                permu(k, sum + A[i], A, p, i, n);
                p[i] = false;
            }
        }
    }
}
 
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T, n, k;
    cin >> T;
    for (int test = 1; test <= T; test++) {
        int A[20] = { 0 };
        bool p[20] = { false };
        cnt = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        cin.ignore(999999, '\n');
        permu(k, 0, A, p, 0, n);
        cout << "#" << test << " " << cnt << "\n";
    }
    return 0;
}