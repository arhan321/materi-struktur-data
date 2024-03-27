#include <iostream>

using namespace std;

int main()
{
    int i, s;
    char h = 'A';
    char nama[4][5][22] = {
        {"Rifky", "Destian", "Vieni", "Andre", "A"},
        {"Della", "Vanya", "Vio", "Indri", "B"},
        {"Hakim", "Bagus", "Firman", "Amin", "C"},
        {"Ramdhan", "Gilang", "Lingga", "Rizky", "D"}};

    cout << "==========================================" << endl;
    cout << "program menampilkan data mahasiswa" << endl;
    cout << "==========================================" << endl;

    for (i = 0; i < 4; i++)
    {
        for (s = 0; s < 5; s++)
        {
            cout << "Nama mahasiswa : " << nama[i][s] << endl;
        }
        cout << "==========================================" << endl;
    }
}