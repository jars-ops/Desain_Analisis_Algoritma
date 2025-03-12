#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string temp;
    cout << "Masukkan banyak buku: ";
    cin >> n;
    cin.ignore();

    string book[n];

    cout << "Masukkan judul buku:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Buku ke-" << i + 1 << ": ";
        getline(cin, book[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (book[j] > book[j + 1]) {
                temp = book[j];
                book[j] = book[j + 1];
                book[j + 1] = temp;
            }
        }
    }

    cout << "\nDaftar buku sebelum diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << book[i] << endl;
	}

    cout << "\nDaftar buku setelah diurutkan: \n";
    for (int i = 0; i < n; i++) {
        cout << book[i] << endl;
    }

    return 0;
}
