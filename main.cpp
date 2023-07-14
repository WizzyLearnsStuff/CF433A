#include<iostream>

using namespace std;

int main() {
	int hist[2] = {0};
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		hist[a/100 - 1]++;
	}

	if (hist[0] % 2 == 0 && hist[1] % 2 == 0) {
		cout << "YES";
		return 0;
	}
	else if (hist[0] % 2 != 0) {
		cout << "NO";
		return 0;
	}

	if (hist[0] >= 2) {
		cout << "YES";
		return 0;
	}

	cout << "NO";
}
