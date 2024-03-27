#include <iostream>

using namespace std;

int main()
{
    int number[5] = {1, 2, 3, 4, 5};
    string name[5] = {"Arhan", "RizkyWahyu", "Budi", "Dedi", "Euis"};

    cout << "=================================";
    cout << "Contoh Array dengan tipe data yang berbeda:" << endl;

    cout << "menampilkan tipe data integer:" << endl;
    cout << "elemen elemen array";

    for (int i = 0; i < 5; i++)
    {
        cout << number[i] << " ";
    }

    cout << endl;
    cout << "==========================================" << endl;
    cout << "menampilkan tipe data string:" << endl;
    cout << "Element elemen array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << " ";
    }
}