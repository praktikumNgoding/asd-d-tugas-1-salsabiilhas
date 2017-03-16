#include <iostream>
#include <math.h>
using namespace std;

struct polinom {
	int angka,pangkat;
	char x;
};
polinom satu[5], dua[6], tiga[2];
polinom tambah[8],kali[5*2],turun[5];
int i = 0, kal = 0, kur = 0;

void deklarasi1(){
	satu[0].angka = 6;
	satu[0].x = 'x';
	satu[0].pangkat = 8;
	satu[1].angka = 8;
	satu[1].x = 'x';
	satu[1].pangkat = 7;
	satu[2].angka = 5;
	satu[2].x ='x';
	satu[2].pangkat = 5;
	satu[3].x ='x';
	satu[3].pangkat = 3;
	satu[4].angka = 15;
}
void deklarasi2(){
	dua[0].angka = 3;
	dua[0].x = 'x';
	dua[0].pangkat = 9;
	dua[1].angka = 4;
	dua[1].x = 'x';
	dua[1].pangkat = 7;
	dua[2].angka = 3;
	dua[2].x = 'x';
	dua[2].pangkat = 4;
	dua[3].angka = 2;
	dua[3].x = 'x';
	dua[3].pangkat = 3;
	dua[4].angka = 2;
	dua[4].x = 'x';
	dua[4].pangkat = 2;
	dua[5].angka = 10;	
}
void deklarasi3(){
	tiga[0].x = 'x';
	tiga[0].pangkat= 2;
	tiga[1].angka = 5;
}

void isi() {
	deklarasi1();
	deklarasi2();
	deklarasi3();}
void penjumlahan() {
	for (int a = 0; a < sizeof(satu) / sizeof(polinom); a++){
		for (int b = 0; b < sizeof(dua) / sizeof(polinom); b++){
			if (satu[a].pangkat == dua[b].pangkat){
				tambah[i].angka = satu[a].angka + dua[b].angka;
				tambah[i].x = satu[a].x;
				tambah[i].pangkat = satu[a].pangkat;
				i++;
				}
			}
		}
	for (int a = 0; a < sizeof(satu) / sizeof(polinom); a++){
		if (satu[a].pangkat != tambah[0].pangkat){
			if (satu[a].pangkat != tambah[1].pangkat){
				if (satu[a].pangkat != tambah[2].pangkat){
					tambah[i].angka = satu[a].angka;
					tambah[i].x = satu[a].x;
					tambah[i].pangkat = satu[a].pangkat;
					i++;
					}
				}
			}
		}
	for (int a = 0; a < sizeof(dua) / sizeof(polinom); a++){
		if (dua[a].pangkat != tambah[0].pangkat){
			if (dua[a].pangkat != tambah[1].pangkat){
				if (dua[a].pangkat != tambah[2].pangkat){
					tambah[i].angka = dua[a].angka;
					tambah[i].x = dua[a].x;
					tambah[i].pangkat = dua[a].pangkat;
					i++;
					}
				}
			}
		}
	for (i = 0; i < sizeof(tambah) / sizeof(polinom); i++){
		cout << tambah[i].angka << tambah[i].x << tambah[i].pangkat << " + ";
	}
	cout << endl;
}
void pengurangan() {
	for (int a = 0; a < sizeof(satu) / sizeof(polinom); a++){
		for (int b = 0; b < sizeof(dua) / sizeof(polinom); b++){
			if (satu[a].pangkat == dua[b].pangkat){
				tambah[kur].angka = satu[a].angka - dua[b].angka;
				tambah[kur].x = satu[a].x;
				tambah[kur].pangkat = satu[a].pangkat;
				kur++;
				}
			}
		}
	for (int a = 0; a < sizeof(satu) / sizeof(polinom); a++){
		if (satu[a].pangkat != tambah[0].pangkat){
			if (satu[a].pangkat != tambah[1].pangkat){
				if (satu[a].pangkat != tambah[2].pangkat){
					tambah[kur].angka = satu[a].angka;
					tambah[kur].x = satu[a].x;
					tambah[kur].pangkat = satu[a].pangkat;
					kur++;
					}
				}
			}
		}
	for (int a = 0; a < sizeof(dua) / sizeof(polinom); a++){
		if (dua[a].pangkat != tambah[0].pangkat){
			if (dua[a].pangkat != tambah[1].pangkat){
				if (dua[a].pangkat != tambah[2].pangkat){
					tambah[kur].angka = dua[a].angka;
					tambah[kur].x = dua[a].x;
					tambah[kur].pangkat = dua[a].pangkat;
					kur++;
					}
			}
		}
	}
	for (kur = 0; kur < sizeof(tambah) / sizeof(polinom); kur++){
		cout << tambah[kur].angka << tambah[kur].x << tambah[kur].pangkat << " + ";}
	cout << endl;}
void perkalian(){
	for (int a = 0; a < sizeof(satu) / sizeof(polinom); a++){
		for (int b = 0; b < sizeof(tiga) / sizeof(polinom); b++){
			kali[kal].angka = satu[a].angka * tiga[b].angka;
			kali[kal].x = satu[a].x;
			kali[kal].pangkat = satu[a].pangkat + tiga[b].pangkat;
			kal++;
			}
		}
	for (kal = 0; kal < sizeof(kali) / sizeof(polinom); kal++){
		if (kali[kal].pangkat == 2){
			kali[kal].x = 'x';}
		cout << kali[kal].angka << kali[kal].x <<kali[kal].pangkat << " + ";
		}
	cout << endl;
}
void turunan(){
	for (int a = 0; a < sizeof(dua)/sizeof(polinom); a++){
		if (dua[a].pangkat == 0){
			break;
		}else{
			turun[a].angka = dua[a].angka* dua[a].pangkat;
			turun[a].x = 'x';
			turun[a].pangkat = dua[a].pangkat - 1;
			}
		}
	for (int a = 0; a < sizeof(turun) / sizeof(polinom); a++){
		cout << turun[a].angka <<turun[a].x << turun[a].pangkat << " + ";
		}
}

int main(){
	cout << "P1 = 6x^8 + 8x^7 + 5x^5+ x^3 + 15" << endl;
    cout << "P2 = 3x^9 + 4x^7 + 3x^4 + 2xP^3 + 2x^2 + 10" << endl;
    cout << "P3 = x^2 + 5" << endl;
    isi();
	cout << "Hasil Penjumlahan : " << endl;
	penjumlahan();
	cout << "Hasil Pengurangan : " << endl;
	pengurangan();
	cout << "Hasil Perkalian   : " << endl;
	perkalian();
	cout << "Hasil Penurunan   : " << endl;
	turunan();

    return 0;
}










