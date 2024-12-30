#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int br, bc, dr, dc, jr, jc;
	cin >> br >> bc >> dr >> dc >> jr >> jc;
	int bs = 0, ds = 0, brcMin;
	ds = abs(dr - jr) + abs(dc - jc);
	brcMin = (abs(br - jr) < abs(bc - jc)) ? abs(br - jr) : abs(bc - jc);
	bs = brcMin + abs(abs(br - jr) - brcMin) + abs(abs(bc - jc) - brcMin);
	if (ds > bs) cout << "bessie";
	else if (ds < bs) cout << "daisy";
	else cout << "tie";
	return 0;
}