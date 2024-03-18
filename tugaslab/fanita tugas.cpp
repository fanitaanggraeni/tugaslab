#include <iostream>

// Deklarasi fungsi 
double hitungLuasPersegiPanjang(double panjang, double lebar);
double hitungKelilingPersegiPanjang(double panjang, double lebar);

int main() {    
    // meminta pengguna memasukan panjang dan lebar 
    double panjang;
   std::cout << "Masukan panjang persegi panjang: ";
   std::cin >> panjang;

   double lebar;
   std::cout << "Masukan lebar persegi panjang: ";
   std::cin >> lebar;

   //  Memanggil fungsi untuk menghitung luas dan keliling persegi panjang 
   double luas = hitungLuasPersegiPanjang(panjang,lebar); 
   double keliling = hitungKelilingPersegiPanjang(panjang,lebar);

   // Menampilkan hasil 
   std::cout << "luas persegi panjang:" << luas << std::endl;
   std::cout << "keliling persegi panjang: " << keliling << std::endl;
    
    return 0;
}

//Implemental fungsi menghitung luas persegi panjang 
double hitungLuasPersegiPanjang(double panjang, double lebar) {
   return panjang * lebar;
}

// Implementasi fungsi menghitung keliling persegi panjang 
double hitungKelilingPersegiPanjang(double panjang, double lebar) {
    return 2 * panjang * lebar;
}