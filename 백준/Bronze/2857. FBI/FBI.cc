#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string name;
    int cnt = 0;
    for(int i=0; i<5; i++){
        cin >> name;
        if(name.find("FBI") != string::npos) {
            cnt++;
            cout << i+1 << " ";
        }
    }
    if(cnt == 0) {
        cout << "HE GOT AWAY!";
    }

    return 0;
}