#include <iostream>

using namespace std;

int main()
{
    string nama;
    string nim;
    string jurusan;
    string fakultas;

    cout << "=====================================" << endl;
    cout << "program mengisikan data mahasiswa dan menampilkan data mahasiswa" << endl;
    cout << "=====================================" << endl;

    cout << "masukkan nama mahasiswa : ";
    getline(cin, nama);

    cout << "masukkan nim mahasiswa : ";
    getline(cin, nim);

    cout << "masukkan jurusan mahasiswa : ";
    getline(cin, jurusan);

    cout << "masukkan fakultas mahasiswa : ";
    getline(cin, fakultas);

    cout << "=====================================" << endl;
    cout << "data mahasiswa" << endl;
    cout << "=====================================" << endl;
    cout << "nama mahasiswa : " << nama << endl;
    cout << "nim mahasiswa : " << nim << endl;
    cout << "jurusan mahasiswa : " << jurusan << endl;
    cout << "fakultas mahasiswa : " << fakultas << endl;
    cout << "=====================================" << endl;

    return 0;
}