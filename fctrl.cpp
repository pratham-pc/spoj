#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;
		int f = 5;
		int cnt = 0;
		while (n / f) {
			cnt += (n / f);
			f *= 5;
		}
		cout << cnt << endl;
	}
	return 0;
}
