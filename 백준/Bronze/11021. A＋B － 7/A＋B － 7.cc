#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() {
	int T, a, b;
	scanf("%d",&T);
	for (int t = 1; t <= T; t++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", t, a + b);
	}
	return 0;
}