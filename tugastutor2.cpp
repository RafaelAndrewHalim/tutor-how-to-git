#include <iostream>
using namespace std;


int main() {

    int air = 4000;
    int teh = 6000;
    int kopi = 10000;
    int harga;
    int uang;
    cout << "---- VENDING MACHINE AUTOMATIC ----" << endl;
    cout << "Pilihan Minuman:" << endl;
    cout << "1. Air Mineral (Rp 4000)" << endl;
    cout << "2. Teh Botol (Rp 6000)" << endl;
    cout << "3. Kopi Susu (Rp 10000)" << endl;

    int kode;
    cout << "Pilih kode minuman (1-3): ";
    cin >> kode;

   
    switch (kode) {
        case 1:
            harga = air;
            break;
        case 2:
            harga = teh;
            break;
        case 3:
            harga = kopi;
            break;
        default: 
            cout << "Kode minuman salah!" << endl;
            return 0;
    }

     cout << "Masukkan uang anda (Rp): ";
    cin >> uang;

    if (uang == harga) {
        cout << "Uang anda pas, silahkan nikmati minuman anda!" << endl;
    }
    else if (uang > harga) {
        int kembalian = uang - harga;
        int kembalian2 = (kembalian / 5000);
        int kembalian3 = (kembalian % 5000) / 1000;
        cout << "Uang anda lebih, kembalian anda " << kembalian2 << " lembar Rp 5000 dan " << kembalian3 << " lembar Rp 1000" << endl;
    }
        else {
            int kekurangan = harga - uang;
            cout << "Transaksi gagal! Uang Anda kurang Rp " << kekurangan << endl;
        }
}