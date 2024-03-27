#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Contoh Array dimensi 1";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
        if (i == 4)
        {
            cout << endl;
        }
    }
    cout << endl;
}