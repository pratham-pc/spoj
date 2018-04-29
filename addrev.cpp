#include <iostream>
using namespace std;

int reverse(int n) {
	int sum = 0;
	while (n) {
		sum = sum * 10 + (n % 10);
		n = n / 10;
	}
	return sum;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int nr = reverse(n);
		int mr = reverse(m);
		cout << reverse(nr + mr) << endl;
	}
	return 0;
}
