#include<iostream>
using namespace std;

void ConveyorMove(int *A, bool *robot, int n) {
	int tmp = A[2 * n - 1];
	for (size_t i = 2*n - 1; i > 0; i--)
	{
		A[i] = A[i - 1];
		if (i < n) {
			robot[i] = robot[i - 1];
		}
	}
	robot[0] = false;
	A[0] = tmp;
	robot[n - 1] = false;
}

void MoveRobot(int *A, bool *robot, int n, int &durability) {
	for (size_t i = n - 1; i > 0; i--)
	{
		if (robot[i - 1] && robot[i] == false && A[i] >= 1) {
			robot[i] = true;
			robot[i - 1] = false;
			A[i]--;
			if (A[i] == 0) {
				durability++;
			}
		}
	}
	robot[n - 1] = false;
}

void PushRobot(int *A, bool *robot, int n, int &durability) {
	if (A[0]) {
		robot[0] = true;
		A[0]--;
		if (A[0] == 0) {
			durability++;
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, process = 0, durability = 0;
	cin >> n >> k;
	int A[200] = { 0 };
	bool robot[100] = { false };
	for (size_t i = 0; i < 2*n; i++)
	{
		cin >> A[i];
	}
	while (durability < k)
	{
		ConveyorMove(A, robot, n);
		MoveRobot(A, robot, n, durability);
		PushRobot(A, robot, n, durability);
		process++;
	}
	cout << process;
	return 0;
}