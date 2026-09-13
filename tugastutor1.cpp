#include <iostream>
using namespace std;

int main(){
    int totalBelanja;

    cout << "Masukkan total belanja (Rp): ";
    cin >> totalBelanja;

    if  (totalBelanja < 100000) {
        cout << "Diskon: 0%" << endl;
        cout << "Total Bayar: Rp " << totalBelanja;
    } else if (totalBelanja < 300000) {
        cout << "Diskon: 10%" << endl;
        cout << "Total Bayar: Rp " << totalBelanja * 0.9;
    } else {
        cout << "Diskon: 20%" << endl;
        cout << "Total Bayar: Rp " << totalBelanja * 0.8;
    }
}