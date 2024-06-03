# Praktikum1
```
#include <iostream>
#include <string>

class Mahasiswa {
private:
    int nrp;
};

class Fakultas {
public:
    int kode;
}; 

int main() {
      mahasiswa = mhs;
    Fakultas fkl;
     mhs.nrp = 12345
    fkl.kode = 22;
    cout <<"Nrp"<< mhs.nrp <<
    std::cout <<"kode" << fkl.kode << std::endl;

    return 0;
};
```
# output
![Screenshot (25) - Copy](https://github.com/fanitaanggraeni/tugaslab/assets/156992694/cda9d5db-cc5f-4178-9777-5d0e6de9157f)

# praktikum 2
```
#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    private:
      int nrp;

    public:
      // Getter untuk mendapatkan nilai nrp
      int getNrp() {
          return nrp;
      }

      // Setter untuk mengatur nilai nrp (jika diperlukan)
      void setNrp(int a) {
          nrp = a;
      }
};
 
class fakultas {
    public:
      int kode;
};

int main() {
    mahasiswa mhs;
    fakultas fkl;

    // Mengatur nilai nrp
    mhs.setNrp(12345);
    // Mengatur nilai kode
    fkl.kode = 22;

    // Mengakses dan mencetak nilai nrp
    cout <<"NRP : "<<mhs.getNrp()<<endl;
    cout <<"Kode : "<<fkl.kode<<endl;

    return 0;
}
```
# output
![Screenshot (26)](https://github.com/fanitaanggraeni/tugaslab/assets/156992694/e4cd37bc-c575-4413-9357-e2bf5fde09bd)

