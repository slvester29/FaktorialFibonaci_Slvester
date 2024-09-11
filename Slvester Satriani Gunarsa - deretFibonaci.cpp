#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int n, f1 = 0, f2 = 1, j = 0;
	cout << "Masukan jumlah deret: ";
	cin >> n;
	cout << "Deret Fibonaci " << n << " bilangan: ";
	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			cout << f1 << ", ";
	}
		if (i == 2) {
			cout << f2 << ", ";
		}
		if (i >= 3) {
			j = f1 + f2;
			f1 = f2;
			f2 + j;
			cout << j << ", ";
		}
	}
	system("PAUSE");
	return 0;

}