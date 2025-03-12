#include <iostream>
using namespace std;

int main () {
	int angka;
	cout << "Masukan sebuah angka : ";
	cin >> angka;
	
	if (angka % 2 == 0) {
		cout << angka << " adalah sebuah bilangan genap.";
	}
	
	else {
		cout << angka << " bukan bilangan genap";
	}
	
	getchar();
}
