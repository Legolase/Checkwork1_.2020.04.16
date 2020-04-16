#include <iostream>

using namespace std;

const int money[] = { 500, 200, 100, 50, 20, 10 };

int main() {
	int n;
	while (cin >> n) {
		int result = -1;
		if (n % 10 != 0)
			cout << "Output: " << result;
		else {
			result = 0;
			int quantity = sizeof(money) / sizeof(money[0]);
			for (int i = 0; i < quantity; ++i) {
				while (n >= money[i]) {
					n -= money[i];
					++result;
				}
			}
			cout << "Output: " << result;
		}
		cout << "-----" << endl;
	}
}