#include <stdio.h>

int main(int argc, char const *argv[]){

	char huruf ; //deklarasi variabel

	//meminta user memasukkan sebuah huruf
	scanf(" %c", &huruf);
	//		^		^	nama variabel yang akan diberi nilai dari masukkan 
	//		^ perwakilan variabel ditulis dengan simbol format

	int angka; // deklarasi variabel
	float angka_berkoma; // deklarasi variable;

	//meminta masukan dua kali untuk variabel angka dan angka_berkoma
	scanf("%d %f", &angka, &angka_berkoma);

	//menampilkan semua variabel
	printf("%c %d %f\n", huruf,angka, angka_berkoma );
	
	return 0;
}