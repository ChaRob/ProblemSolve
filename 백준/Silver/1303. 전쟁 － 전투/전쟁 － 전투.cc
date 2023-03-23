#include<iostream>
using namespace std;

template<class T, int Size> class queue {
public:
	int front;
	int rear;
	int size;
	T *values;

	queue() {
		values = new T[Size];
		front = 0;
		rear = 0;
	}
	~queue() {
		delete[] values;
	}

	bool empty() {
		if (front == rear) {
			return true;
		}
		return false;
	}

	bool isfull() {
		if (front == (rear + 1) % Size) {
			return true;
		}
		return false;
	}

	void push(T value) {
		if (isfull()) {
			perror("que is full!\n");
		}
		else {
			values[rear] = value;
			rear = (rear + 1) % Size;
		}
	}

	T pop() {
		if (empty()) {
			perror("que is empty!\n");
			return 0;
		}
		else {
			int tmp = front;
			front = (front + 1) % Size;
			return values[tmp];
		}
	}
};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, x, y, nx, ny, cnt;
	long long int arr[2] = { 0 };
	cin >> m >> n;
	char s[100][100];
	bool visited[100][100] = { false };
	int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> s[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j]) {
				visited[i][j] = true;
				queue<int, 50> que_x;
				queue<int, 50> que_y;
				que_x.push(i);
				que_y.push(j);
				cnt = 1;
				while (!que_x.empty()) {
					x = que_x.pop();
					y = que_y.pop();
					for (int k = 0; k < 4; k++) {
						nx = x + dir[k][0];
						ny = y + dir[k][1];
						if (0 <= nx && nx < n && 0 <= ny && ny < m && s[nx][ny] == s[i][j] && !visited[nx][ny]) {
							visited[nx][ny] = true;
							que_x.push(nx);
							que_y.push(ny);
							cnt++;
						}
					}
				}
				if (s[i][j] == 'W') {
					arr[0] += cnt*cnt;
				}
				else {
					arr[1] += cnt*cnt;
				}
			}
		}
	}
	cout << arr[0] << " " << arr[1];
	return 0;
}