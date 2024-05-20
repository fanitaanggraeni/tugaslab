#pemrograman oop ke2 
```
#include <iostream>
using namespace std;

// Deklarasi kelas
class sepeda {
public:
    string merek;
    int tahun;
    string model;
    string  tipe;

    // Metode untuk menampilkan informasi
    void perkenalandiri() {
        cout << "Merek: " << merek << endl;
        cout << "tahun: " << tahun << endl;
        cout << "model: " << model << endl;
        cout << "tipe: " <<  tipe  << endl;

    }
};

int main() {
    // Membuat objek dari kelas sepeda
     sepeda s1;
     sepeda s2;
     sepeda s3;
     sepeda s4;

    // Mengakses atribut objek dan memberi nilainya
    s1.merek = "Sepeda bmx";
    s1.tahun = 2018;
    s1.model = "ukuran besar";
    s1.tipe = "bmx";
    
    // Mengakses atribut objek dan memberi nilainya
    s2.merek = "Sepeda lipat tern";
    s2.tahun = 2019;
    s2.model = "ukuran besar";
    s2.tipe = "lipat tern";
     
     // Mengakses atribut objek dan memberi nilainya
    s3.merek = "Sepeda polygon";
    s3.tahun = 2020;
    s3.model = "ukuran besar";
    s3.tipe = "polygon";

    // Mengakses atribut objek dan memberi nilainya
    s4.merek = "Sepeda lipat bmw";
    s4.tahun = 2021;
    s4.model = "ukuran besar";
    s4.tipe = "bmw";

    
    // Memanggil metode untuk menampilkan informasi
    s1.perkenalandiri();
  

    return 0;
}
```
#capture hasil running

![Screenshot (4)](https://github.com/fanitaanggraeni/tugaslab/assets/156992694/239d79c7-934b-4210-bc73-7f1437f756a4)

