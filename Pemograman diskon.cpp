#include <iostream>
#include <iomanip>  // untuk mengatur presisi angka desimal
using namespace std;

int main() {
    double hargaAsli, persenDiskon, hargaDiskon, totalHarga;

    // Input dari pengguna
    cout << "Masukkan harga asli barang: Rp ";
    cin >> hargaAsli;

    cout << "Masukkan persen diskon (tanpa %): ";
    cin >> persenDiskon;

    // Menghitung diskon dan total harga setelah diskon
    hargaDiskon = (persenDiskon / 100) * hargaAsli;
    totalHarga = hargaAsli - hargaDiskon;

    // Menampilkan hasil dengan format desimal 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "\nHarga asli: Rp " << hargaAsli << endl;
    cout << "Diskon: Rp " << hargaDiskon << endl;
    cout << "Total harga setelah diskon: Rp " << totalHarga << endl;

    return 0;
}
