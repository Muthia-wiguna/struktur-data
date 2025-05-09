#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

float bagi(int a, int b) {
    if (b == 0) {
        cout << "Tidak bisa dibagi dengan nol" << endl;
        return 0;
    }
    return (float)a / b;
}

int main() {
    int a, b;

    cout << "Masukkan angka pertama: ";
    cin >> a;

    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << "Tambah: " << tambah(a, b) << endl;
    cout << "Kurang: " << kurang(a, b) << endl;
    cout << "Kali: " << kali(a, b) << endl;
    cout << "Bagi: " << bagi(a, b) << endl;

    return 0;
}