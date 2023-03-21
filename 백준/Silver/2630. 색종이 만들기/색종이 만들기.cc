#include<iostream>
using namespace std;
int paper[128][128] = { 0 };

void cutpaper(int* arr, int sizen, int start_x, int start_y) {
    int standard = paper[start_x][start_y];
    bool check = false;
    for (int i = start_x; i < sizen + start_x; i++) {
        for (int j = start_y; j < sizen + start_y; j++) {
            if (standard != paper[i][j]) {
                i = sizen + start_x;
                check = true;
                break;
            }
        }
    }
    if (check) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cutpaper(arr, sizen / 2, start_x + i * sizen / 2, start_y + j * sizen / 2);
            }
        }
    }
    else {
        arr[standard]++;
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }
    int arr[2] = { 0 };
    cutpaper(arr,n,0,0);
    cout << arr[0] << "\n" << arr[1];
    return 0;
}