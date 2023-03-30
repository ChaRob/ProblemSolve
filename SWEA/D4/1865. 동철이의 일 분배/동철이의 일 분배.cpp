#include<iostream>
using namespace std;
double res;
double percent[16][16] = { 0 };
 
void choice(int visited, int k, int n, double Mulpercent) {
    if (visited == (1 << n) - 1) {
        double tmp = Mulpercent;
        if (tmp > res) {
            res = tmp;
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if ((visited&(1 << i))==0) {
                double tmp = Mulpercent * percent[k][i];
                if (res < tmp) {
                    choice(visited | (1 << i), k + 1, n, Mulpercent*percent[k][i]);
                }
            }
        }
    }
}
 
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout << fixed;
    cout.precision(6);
    int T;
    cin >> T;
    for (int test = 1; test <= T; test++) {
        int n;
        cin >> n;
        res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> percent[i][j];
                percent[i][j] /= 100;
            }
        }
        choice(0, 0, n, 1);
        cout << "#" << test << " " << res*100 << "\n";
    }
    return 0;
}