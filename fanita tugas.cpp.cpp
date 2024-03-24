#include <iostream>
#include <string>
using namespace std;

string getNextDay(string currentDay) {
    // Array untuk menyimpan nama-nama hari
    string days[] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    
    // Validasi input pengguna
    bool validDay = false;
    for (int i = 0; i < 7; ++i) {
        if (days[i] == currentDay) {
            validDay = true;
            break;
        }
    }
    if (!validDay) {
        return "Masukkan hari yang valid";
    }
    
    // Cari indeks dari hari yang dimasukkan pengguna
    int index = 0;
    for (int i = 0; i < 7; ++i) {
        if (days[i] == currentDay) {
            index = i;
            break;
        }
    }
    
    // Hitung indeks hari selanjutnya, dengan menghindari overflow
    int nextIndex = (index + 1) % 7;
    
    // Kembalikan nama hari selanjutnya
    return days[nextIndex];
}

int main() {
    string inputDay;
    cout << "Masukkan nama hari: ";
    getline(cin, inputDay); // Menggunakan getline untuk mendapatkan input pengguna
    
    string nextDay = getNextDay(inputDay);
    cout << "Hari selanjutnya dari " << inputDay << " adalah " << nextDay << endl;
    
    return 0;
}