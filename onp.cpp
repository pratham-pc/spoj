#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		// operators: +, -, *, /, ^
		stack<char> s;
		string str;
		cin >> str;
		int i;
		for (i = 0; i < str.length(); i++) {
			if (str[i] == '(' || ((int)str[i] < 123 && (int)str[i] > 96)) {
				s.push(str[i]);
			} else if (str[i] == '+') {
				s.push('1');
			} else if (str[i] == '-') {
				s.push('2');
			} else if (str[i] == '*') {
				s.push('3');
			} else if (str[i] == '/') {
				s.push('4');
			} else if (str[i] == '^') {
				s.push('5');
			} else {
				string temp = "";
				while (s.top() != '(') {
					temp = s.top() + temp;
					s.pop();
				}
				s.pop();
				int j = 0;
				string op1 = "", op2 = "";
				char op;
				while (j < temp.length() && temp[j] != '1' && temp[j] != '2' && temp[j] != '3' && temp[j] != '4' && temp[j] != '5') {
					op1 = op1 + temp[j];
					j++;
				}
				op = temp[j++];
				while (j < temp.length() && temp[j] != '1' && temp[j] != '2' && temp[j] != '3' && temp[j] != '4' && temp[j] != '5') {
					op2 = op2 + temp[j];
					j++;
				}
				for (j = 0; j < op1.length(); j++) {
					s.push(op1[j]);
				}
				for (j = 0; j < op2.length(); j++) {
					s.push(op2[j]);
				}
				switch(op) {
					case '1':
						s.push('+');
						break;
					case '2':
						s.push('-');
						break;
					case '3':
						s.push('*');
						break;
					case '4':
						s.push('/');
						break;
					case '5':
						s.push('^');
						break;
				}
			}
		}
		string ans = "";
		while (!s.empty()) {
			ans = s.top() + ans;
			s.pop();
		}
		cout << ans << endl;
	}
	return 0;
}

