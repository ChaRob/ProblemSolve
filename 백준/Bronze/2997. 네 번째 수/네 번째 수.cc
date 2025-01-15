#include <iostream>
using namespace std;

int compare(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int num[3], size1, size2, ans;
	for (int i = 0; i < 3; i++)
	{
		cin >> num[i];
	}
	qsort(num, 3, sizeof(int),compare);
	size1 = num[2] - num[1];
	size2 = num[1] - num[0];
	if (size1 < size2) {
		ans = num[1] - size1;
	}
	else if (size1 > size2) {
		ans = num[1]  + size2;
	}
	else {
		ans = num[2] + size2;
	}
	cout << ans;
	return 0;
}