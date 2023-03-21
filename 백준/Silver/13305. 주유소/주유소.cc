#include<iostream>
using namespace std;
long long int dist[100000] = { 0 };
long long int gas[100000] = { 0 };
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, i;
    cin >> n;
    for (i = 0; i < n - 1; i++) {
        cin >> dist[i];
    }
    for (i = 0; i < n; i++) {
        cin >> gas[i];
    }
    long long int min_gas = gas[0], minprice = 0;
    for (i = 0; i < n; i++) {
        if (min_gas > gas[i]) {
            min_gas = gas[i];
        }
        minprice += min_gas * dist[i];
    }
    cout << minprice;
    return 0;
}