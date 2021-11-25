#include <iostream>
using namespace std;

int main(){
	
	string kelas[5] = {"zayn","harry","niall","louis","liam"};
	string cari;

	bool cek = false;
	
	cout << "nama yang ingin dicari : ";
	getline(cin, cari);
	
	for (int i=0;i<5;i++){
		if (cari==kelas[i]){ 
			cout << cari << " adalah member one direction";
			cek = true;
		}
	}
	
	if (cek==false){
		cout << cari << " bukan member one direction";
	}
}
