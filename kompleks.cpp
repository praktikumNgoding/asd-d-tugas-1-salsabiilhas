#include <iostream>
#include<math.h>
using namespace std;

struct kompleks{
	double angka;
	char i;
};
kompleks bil1,bil2,bil3,bil4;

void deklarasi(){
	bil1.angka = 3;
	bil2.angka = 5;
	bil2.i = 'i';
	bil3.angka = 8;
	bil4.angka = 2;
	bil4.i = 'i';
	cout << "a = " <<bil1.angka <<endl;
	cout << "b = " <<bil2.angka <<bil2.i <<endl;
	cout << "c = " <<bil3.angka <<endl;
	cout << "d = " <<bil4.angka <<bil4.i <<endl;
}
void tambah() {
	cout << bil1.angka + bil3.angka << " + " <<bil2.angka + bil4.angka << bil2.i << endl;
}
void kurang() {
	cout << bil1.angka - bil3.angka << " + " <<bil2.angka - bil4.angka << bil2.i << endl;
}
void kali() {
	double hasil1, hasil2;
	hasil1 = (bil1.angka * bil3.angka) - (bil2.angka * bil4.angka);
	hasil2 = (bil1.angka * bil4.angka) - (bil2.angka * bil3.angka);
	cout << hasil1 << " + " <<hasil2 <<bil2.i <<endl;
}
void bagi() {
	double a,b,c,d;
	a = ((bil1.angka * bil3.angka) + (bil2.angka * bil4.angka));
	b = (pow(bil1.angka, 2) + pow(bil2.angka, 2));
	c = ((bil2.angka * bil3.angka) - (bil1.angka * bil4.angka));
	d = (pow(bil3.angka, 2) + pow(bil4.angka, 2));
	cout << ((a/b)+(c/d)) <<bil2.i << endl;
}
int main(){
	deklarasi();
	int pilih;
	do{
		cout << "\nPilih Operasi : " << endl;
		cout << "1. Penambahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. Keluar" << endl;
		cout << "pilih : "; cin >> pilih;
		if (pilih==1){
			tambah();
		}else if (pilih==2){
			kurang();
		} else if (pilih==3){
			kali();
		}else if (pilih==4){
			bagi();}
		else if (pilih==5){
			break;
		}else{
			cout << "TERIMAKASIH" << endl;
		}
	} while (true);
    return 0;
}
