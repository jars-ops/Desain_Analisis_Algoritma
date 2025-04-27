#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int binarySearch(string books[], int n, string target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2; 

        if (books[mid] == target) {
            return mid;
        }

        else if (books[mid] > target) {
            right = mid - 1;
        }

        else {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    string books[] = {
        "Algoritma Dasar",
        "Basis Data",
        "Bahasa Indonesia",
        "Matematika Lanjut",
        "Matematika Diskrit",
        "Elektronika Dasar",
        "Pengantar Teknologi Informasi",
        "Desain Grafis",
        "UI/UX",
        "Web Programming"
    };

    int n = sizeof(books) / sizeof(books[0]);

    sort(books, books + n);

    cout << "Daftar Buku di Perpustakaan:\n";
    for (int i = 0; i < n; i++) {
        cout << books[i] << endl;
    }

    string target;
    cout << "\nMasukkan judul buku yang ingin dicari: ";
    getline(cin, target);

    int index = binarySearch(books, n, target);

    if (index != -1) {
        cout << "Buku '" << target << "' ditemukan di rak nomor " << index + 1 << ".\n";
    } else {
        cout << "Buku '" << target << "' tidak ditemukan di perpustakaan.\n";
    }

    return 0;
}

