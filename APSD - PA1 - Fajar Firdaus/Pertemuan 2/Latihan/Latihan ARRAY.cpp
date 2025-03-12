#include <iostream>
using namespace std;

int main () {
	int i;
	int angka [5] = {10, 20, 30, 40, 50};
	cout << "Isi array : \n";
	
    for (i = 0; i < 5; i++) {
        cout << "angka" << "[" << i << "] = " << angka[i] << endl;
    }

    getchar();
}
