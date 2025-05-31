#include <iostream>
#include <queue>
#include <string>

using namespace std;

class AntrianLoket {
private:
    queue<string> antrian;

public:
    void tambahPelanggan(const string& nama) {
        antrian.push(nama);
        cout << ">> " << nama << " telah ditambahkan ke dalam antrian.\n";
    }

    void layaniPelanggan() {
        if (!antrian.empty()) {
            cout << ">> Melayani pelanggan: " << antrian.front() << endl;
            antrian.pop();
        } else {
            cout << ">> Pelanggan tidak ada dalam antrian.\n";
        }
    }

    void tampilkanAntrian() const {
        if (antrian.empty()) {
            cout << ">> Antrian kosong.\n";
        } else {
            cout << ">> Daftar pelanggan dalam antrian:\n";
            queue<string> temp = antrian;
            int nomor = 1;
            while (!temp.empty()) {
                cout << nomor++ << ". " << temp.front() << endl;
                temp.pop();
            }
        }
    }

    void resetAntrian() {
        while (!antrian.empty()) {
            antrian.pop();
        }
        cout << ">> Antrian dikosongkan.\n";
    }
};

void tampilkanMenu() {
    cout << "\n======================================" << endl;
    cout << "          LOKET ANTRIAN          " << endl;
    cout << "======================================" << endl;
    cout << "1. Tambah ke antrian\n";
    cout << "2. Layani antrian\n";
    cout << "3. Lihat semua antrian\n";
    cout << "4. Reset antrian\n";
    cout << "5. Keluar dari antrian\n";
    cout << "Pilih menu (1-6): ";
}

int main() {
    AntrianLoket loket;
    int pilihan;
    string nama;

    do {
        tampilkanMenu();
        cin >> pilihan;
        cin.ignore(); 

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama pelanggan: ";
                getline(cin, nama);
                loket.tambahPelanggan(nama);
                break;

            case 2:
                loket.layaniPelanggan();
                break;

            case 3:
                loket.tampilkanAntrian();
                break;

            case 4:
                loket.resetAntrian();
                break;

            case 5:
                cout << ">> Terima kasih telah mengantri. Sampai jumpa kembali!\n";
                break;

            default:
                cout << ">> Pilihan tidak valid. Silakan coba lagi.\n";
        }

    } while (pilihan != 5);

    return 0;
}

