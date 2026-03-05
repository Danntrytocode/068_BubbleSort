//MINIMAL COMMIT 5//

#include <iostream>
#include <string>
using namespace std;

int array[20]; //Deklarasi variable global array a dengan ukuran 20 (berapapun)
int n;         //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input()
{ // Prosedur untuk input
    int d;
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array : "; // Output ke layar
        cin >> n;                                         // Input dari pengguna
        if (n <= 20)                                       // if n kurang dari atau sama dengan 20
            break;                                         // Keluar dari Loop
        else
    }
}