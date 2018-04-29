#include <iostream>
#include <vector>
using namespace std;

int main() {
	bool arr[100000] = {false};
	int i;
	vector <int> v;
	for (i = 2; i * i < 100000; i++) {
		if (arr[i] == false) {
			int j;
			for (j = i + i; j < 100000; j += i) {
				arr[j] = true;
			}
		}
	}
	for (i = 2; i < 100000; i++) {
		if (arr[i] == false)
			v.push_back(i);
	}
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		bool garr[100000] = {false};
		int n1;
		if (n == 1) {
			garr[0] = true;
			n1 = 2;
		} else {
			n1 = n;
		}
		for (i = n1; i <= m; i++) {
			int j = 0;
			for (j = 0; j < v.size(); j++) {
				if (i != v[j] && i % v[j] == 0) {
					garr[i-n] = true;
					break;
				}
			}
		}
		for (i = n; i <= m; i++) {
			if (garr[i-n] == false)
				cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}

