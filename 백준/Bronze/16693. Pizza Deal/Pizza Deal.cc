#include<iostream>
#define M_PI 3.14159265358979323846
using namespace std;
int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	double a, p1, r, p2;
	cin >> a >> p1 >> r >> p2;
	if (a / p1 < r*r*M_PI / p2) {
		cout << "Whole pizza";
	}
	else {
		cout << "Slice of pizza";
	}
	
	return 0;
}