#include <iostream>
using namespace std;

int arr[20];
int n;
   
void input() {
	while (true)
	{
		cout << "Masukkan Jumlah Data Array: ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";
		}
	}
	cout << endl; 
}