#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N, M, begin, end, mid;
	int basket[101] = { 0 };
	cin >> N >> M;
	for (int i = 0; i <= N; i++) {
		basket[i] = i;
	}
	for (int m = 1; m <= M; m++) {
		cin >> begin >> end >> mid;
		int tmp[101] = { 0 };
		for (int j = begin; j <= mid - 1; j++) {
			tmp[j - begin] = basket[j];
		}
		for (int j = mid; j <= end; j++) {
			basket[begin + j - mid] = basket[j];
		}
		for (int j = 0; j <= mid - begin - 1 ; j++) {
			basket[end - mid + 1 + begin + j] = tmp[j];
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << basket[i] << " ";
	}
	return 0;
}