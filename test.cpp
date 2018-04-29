#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int c;
	while (cin >> c) {
		if (c == 42)
			return 0;
		cout << c << endl;
	}

	return 0;
}
