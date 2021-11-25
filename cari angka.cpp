#include <iostream>
using namespace std;

int main(){
	
	int jumlah,cari;
	bool cek = false;
	
	cout << "masukkan jumlah angka : ";
	cin >> jumlah;
	
	int arr[jumlah];
	
	for (int i=0; i<jumlah; i++){
		cout << "masukkan angka ke " << i+1 << " : ";
		cin >> arr[i];
	}
	
	cout << "\nangka yang ingin dicari : ";
	cin >> cari;
	
	for (int i=0; i<jumlah; i++){
		if (cari==arr[i]){
			cout << "angka ditemukan pada indeks ke " << i+1 << endl;
			cek = true;
		}
	}
	
	if (cek==false){
		cout << "angka tidak ditemukan pada array";
	}
}
