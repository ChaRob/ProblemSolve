#include<iostream>
#include<iomanip>
using namespace std;

const float pi = 3.1415927f;

float ConversionToMile(float _inch)
{
	return _inch / 63360;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n = 1;
	while (true)
	{
		float radius, rotate, time;
		cin >> radius >> rotate >> time;
		if (rotate == 0) break;
		float distance = ConversionToMile(pi * radius * rotate);
		float speed = distance / (time / 3600);
		cout << fixed << setprecision(2) << "Trip #" << n++ << ": " << distance << " " << speed << "\n";
	}
	return 0;
}