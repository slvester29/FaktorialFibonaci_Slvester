#include <iostream>
#include <cstdlib>

using namespace std;

int Fibonaci(int n) {
	if ((n == 0) || (n == 1)) {
		return(n);
	}
	if (n >= 3) {
		return(Fibonaci(n - 1) + Fibonaci(n - 2));
	}
}
int main() {
	int n;
	int i = 0;
	cout << "Masukan jumlah deret Fibonaci: ";
	cin >> n;
	cout << "Deret Fibonacci untuk n = " << n << " adalah ";
	while (i < n) {
		cout << "" << Fibonaci(i) << ", ";
		i++;
	}
	system("PAUSE");
	return 0;
}