# percobaan
```
#include <iostream>
#include <string>

class Mahasiswa {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    Mahasiswa(std::string n, int u) {
        nama = n;
        umur = u;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }

    // Metode untuk menampilkan informasi Mahasiswa
    void tampilkanInfo() {
        std::cout << "Nama: " << nama << ", Umur: " << umur << std::endl;
    }
};

int main() {
    // Membuat objek Mahasiswa
    Mahasiswa mhs("Fanita", 19);

    // Menggunakan metode public untuk mengakses data private
    std::cout << "Informasi awal Mahasiswa:" << std::endl;
    mhs.tampilkanInfo();

    // Mengubah nama dan umur menggunakan setter
    mhs.setNama("Fenita");
    mhs.setUmur(20);

    // Menampilkan informasi yang sudah diubah
    std::cout << "Informasi setelah diubah:" << std::endl;
    mhs.tampilkanInfo();

// Getter untuk mendapatkan nama
    std::cout << "Nama:" << mhs.getNama () << std::endl;
    std::cout << "umur:" << mhs.getUmur () << std::endl;


    return 0;
    
}
```
# capture hasil running

![Screenshot (23)](https://github.com/fanitaanggraeni/tugaslab/assets/156992694/0294f8e9-4841-4044-bf3a-033583ccb8a8)

# pratikumpii
```
#include <iostream>
#include <string>

class Mahasiswa {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;
    std::string prodi;
    std::string fakultas;
    
    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    Mahasiswa(std::string n, int u, std::string p, std::string f) {
        nama = n;
        umur = u;
        prodi = p;
        fakultas = f;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }

    // Setter untuk mengatur prodi
    void setProdi(int p) {
        prodi = p;
    } 

    // Getter untuk mendapatkan prodi
    std::string getProdi() {
        return prodi;
    }

    // Setter untuk mengatur fakultas
    void setFakultas(int f) {
        fakultas = f;
    } 

    // Getter untuk mendapatkan fakultas
    std::string getFakultas() {
        return fakultas;
    }

    // Metode untuk menampilkan informasi Mahasiswa
    void tampilkanInfo() {
        std::cout << "Nama: " << nama << ", Umur: " << umur << ", Prodi: " << prodi << ", Fakultas: " <<fakultas << std::endl;
    }
};

int main() {
    // Membuat objek Mahasiswa
    Mahasiswa mhs("Fanita", 19, "Agribisnis","fastek");

    // Menampilkan informasi yang sudah diubah
    std::cout << "Informasi setelah diubah:" << std::endl;
    mhs.tampilkanInfo();

    std::cout << "nama: " << mhs.getNama() << std::endl;
    std::cout << "umur: " << mhs.getUmur() << std::endl;
    std::cout << "Prodi: " << mhs.getProdi() << std::endl;
    std::cout << "Fakultas: " << mhs.getFakultas() << std::endl;

    return 0;
}
```
# capture hasil running

![Screenshot (24)](https://github.com/fanitaanggraeni/tugaslab/assets/156992694/14eac16a-322c-4125-882d-2913dca8fdc5)
