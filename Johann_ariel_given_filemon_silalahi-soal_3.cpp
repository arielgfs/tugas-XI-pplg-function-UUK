#include <iostream>
using namespace std;

int minimumx(int berat[], int ukuran) {
    int minimum = berat[0];
    for (int i = 1; i < ukuran; i++) {
        if (berat[i] < `minimum) {
            minimum = berat[i];
        }
    }
    return minimum;
}

int main() {
    int const siswa = 5;
    int berat[siswa];
    cout << "Masukan " << siswa << " data berat siswa X-PPLG (Kg): " << endl;
    
    // Menginput data siswa ke array
    for (int i = 0; i < siswa; ++i) {
        cout << "Berat Siswa Ke-" << i + 1 << ": ";
        cin >> berat[i];
    }
    
    // Mencari nilai minimum
    int minimum = minimumx(berat, siswa);
    
    // Menampilkan data siswa
    cout << endl;
    cout << "---     DATA SISWA     ---" << endl;
    for (int n = 0; n < siswa; ++n) {
        cout << "Berat Siswa Ke-" << n + 1 << ": " << berat[n] << "Kg" << endl;
    }
    cout << "Berat badan paling kecil siswa X-PPLG: " << minimum << "Kg" << endl;

    return 0;
}
