#include <iostream>

using namespace std;

struct Mahasiswa
{
    string nama;
    int nim;
    int umur;
    float ipk;
};

int main()
{
    Mahasiswa mhs1;

    mhs1.nama = "Rifky";
    mhs1.nim = 12345;
    mhs1.umur = 20;
    mhs1.ipk = 3.5;

    cout << "NIM: " << mhs1.nim << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Umur: " << mhs1.umur << endl;
    cout << "IPK: " << mhs1.ipk << endl;

    return 0;
}
