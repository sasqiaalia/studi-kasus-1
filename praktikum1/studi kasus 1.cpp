/*
KELOMPOK STORMI

KRISNA CAKRA NINGRAT 2100018449
ANELA INDRA 2100018454
SASQIA AULIA NUR AINI 2100018456
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main(){
	float liter, hasil, total;
	string nama;
	int n;
	
	cout<<"===============================================\n";
	cout << "STRUK SPBU UIUIUIUIUI\n";
	cout << "Nama Pelanggan : ";
	cin >> nama;
	cout << "1.Pertalite \n2.Pertamax \nMasukan jenis BBM : ";
	cin >> n;
	cout << "Masukan pembelian perliter : ";
	cin >> liter;
	
	ofstream pos;
    pos.open("SPBU.txt", ios::out);
	pos << "PETAMINI\n";
	pos << "--------------------------------\n";
{
	if (n == 1){
		hasil = 7000 * liter;
		pos << "Jenis BBM     : Pertalite\n";
	}
	else
	if (n == 2){
		hasil = 9000 * liter;
    	pos << "Jenis BBM     : Pertamax\n";
	}
	total = hasil / liter; 
}
pos << "Nama Pelanggan		: " << nama << endl;
pos << "Liter				: " << liter << endl;
pos << "Harga/Liter			: Rp. " << total << endl;
pos << "Total				: Rp. " << hasil << endl;
pos << "================================\n";
pos << "Terima kasih brodi";
pos.close();

return 0;
}
