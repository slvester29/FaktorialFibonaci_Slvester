#include <iostream>
#include <cstdlib>

using namespace std;

unsigned long long faktorial(int n) {
	if (n == 1) {
		return 1;
	}

	return n * faktorial(n - 1);
}

int main() {
	int n;
	cout << "masukan nilai faktorial yang ingin dicari: ";
	cin >> n;
	cout << "faktorial dari " << n << " = " << faktorial(n) << endl;

	system("PAUSE");
	return 0;
}