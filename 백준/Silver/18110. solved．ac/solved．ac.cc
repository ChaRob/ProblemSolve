#include <iostream>
#include <math.h>
using namespace std;

int compare(void const* a, void const* b) {
    return *(int* )b - *(int* )a;
}

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, sum = 0;
    cin >> n;
    int* score = new int[n];
    int deletePerson = round(n * 0.15);
    if (n != 0) {
        for (int i = 0; i < n; i++)
        {
            cin >> score[i];
        }
        qsort(score, n, sizeof(score[0]), compare);
        for (int i = deletePerson; i < n - deletePerson; i++)
        {
            sum += score[i];
        }
        cout << round((float)sum / (n - deletePerson * 2));
    }
    else {
        cout << 0;
    }
    delete[] score;
    return 0;
}