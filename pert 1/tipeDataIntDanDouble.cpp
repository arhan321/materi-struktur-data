#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    double hasil;

    cout << "=====================================" << endl;
    cout << "Ini adalah program operasi matematika" << endl;
    cout << "=====================================" << endl;

    cout << "Silahkan pilih angka dari menu operasi matematika" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;

    cout << "Masukan Pilihan : ";
    cin >> a;

    if (a == 1)
    {
        cout << "Masukan angka pertama : ";
        cin >> b;
        cout << "Masukan angka kedua : ";
        cin >> c;
        hasil = b + c;
        cout << "Hasil penjumlahan dari " << b << " + " << c << " = " << hasil << endl;
    }
    else if (a == 2)
    {
        cout << "Masukan angka pertama : ";
        cin >> b;
        cout << "Masukan angka kedua : ";
        cin >> c;
        hasil = b - c;
        cout << "Hasil pengurangan dari " << b << " - " << c << " = " << hasil << endl;
    }
    else if (a == 3)
    {
        cout << "Masukan angka pertama : ";
        cin >> b;
        cout << "Masukan angka kedua : ";
        cin >> c;
        hasil = b * c;
        cout << "Hasil perkalian dari " << b << " * " << c << " = " << hasil << endl;
    }
    else if (a == 4)
    {
        cout << "Masukan angka pertama : ";
        cin >> b;
        cout << "Masukan angka kedua : ";
        cin >> c;
        hasil = b / c;
        cout << "Hasil pembagian dari " << b << " / " << c << " = " << hasil << endl;
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
    }

    return 0;
}
