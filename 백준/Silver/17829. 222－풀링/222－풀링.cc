#include<iostream>
using namespace std;

int arr[1024][1024] = { 0 };

int cmp(const void* x, const void* y) {
    const int* a = (int*)x;
    const int* b = (int*)y;
    if (*a > *b) {
        return 1;
    }
    else if (*a < *b) {
        return -1;
    }
    else {
        return 0;
    }
}

int CNN(int start_x, int start_y, int end_x, int end_y) {
    int tmp[4] = { 0 };
    if (end_x == start_x) {
        return arr[start_x][start_y];
    }
    else {
        tmp[0] = CNN(start_x, start_y, (start_x + end_x) / 2, (start_y + end_y) / 2);
        tmp[1] = CNN((start_x + end_x) / 2 + 1, start_y, end_x, (start_y + end_y) / 2);
        tmp[2] = CNN(start_x, (start_y + end_y) / 2 + 1, (start_x + end_x) / 2, end_y);
        tmp[3] = CNN((start_x + end_x) / 2 + 1, (start_y + end_y) / 2 + 1, end_x, end_y);

        qsort(tmp, 4, sizeof(int), cmp);
        return tmp[2];
    }
}


int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << CNN(0, 0, n - 1, n - 1);
    return 0;
}