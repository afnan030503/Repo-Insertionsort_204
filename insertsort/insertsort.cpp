#include <iostream>
using namespace std;

int arr[20]; //membuat array dengan panjang data 20
int n; // membuat variabel inputan n
   
void input() {   //prosedur untuk input
    while (true) 
    {    
        cout << "masukkan banyaknya elemen pada array : ";  //output ke layar
        cin >> n;      //memanggil variabel inputan n

        if (n <= 20) {   //membuat kondisi n tidak lebih dari 20
            break;  
        }
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";  //output ke layar
        }
    }
    cout << endl;                         // membuat jarak per baris program
    cout << "===================" << endl; // membuat tampilan susunan data element array
    cout << " masukkann elemen array" << endl;  
    cout << "===================" << endl; 


    for (int i = 0; i < n; i++) // menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": "; // MEmasukkan atau meninputkan nilai data n
        cin >> arr[i];    // Menyimpan nilai data n ke dalam array arr
    }
}

void insertionsort() { // Prosedur insertionsort 

    int temp; // Membuat variabel temporer atau menyimpan sementara
    int j; // Membuat variable j sebagai penanda

    for (int i = 1; i < n; i++) {// 1. Looping dengan i dimulai dari 1 hingga n - 1
        temp = arr[i]; // 2. Simpan nilai arr[i] ke variabel sementara temp
        j = i - 1;  // 3. Setting nilai j dengan n - 1
        while (j > 0 && arr[j] > temp) // 4. Looping while dimana nilai j lebih besar sama dengan 0 dan arr[j] lebih besar daripada temp

        {
            arr[j + 1] = arr[j];    // 4a. Simpan arr[j] ke dalam variabel arr[j + 1] 
            j--;                    // 4b. Decrement nilai j by 1
        }

        arr[j + 1] = temp;          // 5. Simpan nilai temp ke dalam arr[j+1]

        cout << "\nPass " << i << ": ";   // output ke layar
        for (int k = 0; k < n; k++) {      // Looping nilai k dimulai dari 0 hingga n - 1
            cout << arr[k] << ": ";     // output ke layar
        }
    }
}

void display() { // prosedur dsiplay
    cout << endl; //output baris kosong
    cout << "\n====================" << endl;  //output ke layar
    cout << "Element Array Yang telah Tersusun" << endl; //output ke layar
    cout << "======================" << endl; //output ke layar

    for (int j = 0; j < n; j++) { //looping dengan j dimulai dari 1 hingga n -1 
        cout << arr[j] << endl; //output ke layar
    }
    cout << endl; //output baris kosong
}

int main()
{
    input(); // memanggil input
    insertionsort();// memanggil  insertionsort
    display();// memanggil display
}