#include <iostream>
using namespace std;

int compare(const void* a, const void* b) {
    int x = *(int*)a, y = *(int*)b;
    if (x < y) return -1;
    else if (x == y) return 0;
    return 1;
}

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int line[3];
    while (true) {
        cin >> line[0] >> line[1] >> line[2];
        if (line[0] == 0 && line[1] == 0 && line[2] == 0) {
            break;
        }
        qsort(line, 3, sizeof(int), compare);

        if (line[0] == line[1] && line[1] == line[2]) {
            cout << "Equilateral\n";
        }
        else if (line[2] < line[0] + line[1]) {
            if (line[0] == line[1] || line[1] == line[2]) {
                cout << "Isosceles\n";
            }
            else {
                cout << "Scalene\n";
            }
        }
        else {
            cout << "Invalid\n";
        }
    }
    return 0;
}