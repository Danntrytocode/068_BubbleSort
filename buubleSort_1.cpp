//MINIMAL COMMIT 5//

#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi variable global array a dengan ukuran 20 (berapapun)
int n;         //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input()
{ // Prosedur untuk input
    int d;
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array : ";      // Output ke layar
        cin >> n;                                               // Input dari pengguna
        if (n <= 20)                                            // if n kurang dari atau sama dengan 20
            break;                                              // Keluar dari Loop
        else
        {                                                               // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";   // Output ke layar
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)
    {                                           // Looping dengan i dimulai dari 0 hingga 20
        cout << "Data ke-" << (i + 1) << "; ";  // Output ke layar
        cin >> arr[i];                          // Input dari pengguna
    }


}