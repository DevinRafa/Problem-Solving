#include <iostream>
#include <vector> // Gunakan vector agar lebih fleksibel

int main() {
    int n;
    int hasil;
    std::cout << "Masukkan jumlah angka: ";
    std::cin >> n;

    // Membuat vector untuk menyimpan angka-angka
    int angka[n];

    std::cout << "Masukkan " << n << " angka (pisahkan dengan spasi): ";
    // Looping untuk membaca input
    for (int i = 0; i < n; ++i) {
        std::cin >> angka[i]; // Baca setiap angka
    }

    // Looping untuk mencetak kembali sebagai bukti
    std::cout << "Angka yang kamu masukkan adalah: ";
    for (int i = 0; i < n; ++i) {
        std::cout << angka[i] << " ";
    }
    std::cout<<"\nJumlah dari semua angka yang anda masukan adalah: ";
    for (int i=0; i<n; ++i){
        hasil += angka[i];
    }
    std::cout<<hasil;

    return 0;
}