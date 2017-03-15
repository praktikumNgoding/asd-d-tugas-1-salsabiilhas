#include <iostream>
#include <math.h>
using namespace std;

struct polinom {
	int angka,pangkat;
	char x;
};
polinom satu[10], dua[10], tiga[10];

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
int main(){
	cout << "P1 = 6x^8 + 8x^7 + 5x^5+ x^3 + 15" << endl;
    cout << "P2 = 3x^9 + 4x^7 + 3x^4 + 2xP^3 + 2x^2 + 10" << endl;
    cout << "P3 = x^2 + 5" << endl;
}










