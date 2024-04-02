// startup code c++ for pert 1

// instalasi c++ di windows
// https://code.visualstudio.com/docs/languages/cpp

#include <iostream>

using namespace std;

int main()
{
    // tipe data integer (bilangan bulat)
    int angka_1 = 10;
    int angka_2 = 20;

    short int si = 3000;
    long int li = 3000000000;

    // tipe data float (bilangan pecahan)
    float pecahan_1 = 10.5;
    float pecahan_2 = 20.5;
    long double ld = 30.5;

    // tipe data char (karakter)
    char karakter_A = 'A';
    char karakter_B = 'B';

    // tipe data boolean (benar atau salah)
    bool benar = true;
    bool salah = false;

    // tipe data string (kumpulan karakter)
    string sapa = "Hello World";

    // tipe data array (kumpulan tipe data)
    int array[5] = {1, 2, 3, 4, 5};

    // tipe data pointer (alamat memori)
    int *pointer;
    int *pointer_2;

    // tipe data enum (enumerasi)
    enum hari
    {
        senin,
        selasa,
        rabu,
        kamis,
        jumat,
        sabtu,
        minggu
    };

    // tipe data struct (struktur data)
    struct buah
    {
        string nama;
        int harga;
    };

    // print di console
    cout << angka_1 << endl;

    // cout << "Size bit dari short int: " << sizeof(si) << endl;
    // cout << "Size bit dari long int: " << sizeof(li) << endl;

    return 0;
}
