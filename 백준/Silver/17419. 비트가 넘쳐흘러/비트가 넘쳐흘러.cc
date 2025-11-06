#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string input;
    cin >> input;
    bitset<1000000> bits(input);
    int calCnt = bits.count();
    cout << calCnt;
    return 0;
}
