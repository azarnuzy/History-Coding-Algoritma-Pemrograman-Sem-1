#include <stdio.h>
/*Saya Muhammad Azar Nuzy 2004191 mengerjakan soal Kompetisi TP1 Alpro1 2020 C1 dalam 
mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
int main(int argc, char const *argv[])
{
	double a,b,c,d,e,f;//membuat variabel float
	//membuat variabel integer untuk dimasukkan ke dalam operasi aritmatika
	int depanA,belakangA;
	int depanB,belakangB;
	int depanC,belakangC;
	int depanD,belakangD;
	int depanE,belakangE;
	int depanF,belakangF;
	//meminta user memasukkan variabel float
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
	//membuat operasi aritmatika untuk setiap variabel float yang dimasukkan, agar mendapatkan nilai di belakang koma
	depanA = a;
	belakangA = (a-depanA)*10;
	depanB = b;
	belakangB = (b-depanB)*10;
	depanC = c;
	belakangC = (c-depanC)*10;
	depanD = d;
	belakangD = (d-depanD)*10;
	depanE = e;
	belakangE = (e-depanE)*10;
	depanF = f;
	belakangF = (f-depanF)*10;
	//membuat variabel untuk dijadikan boolean
	int x1=0;
	int x2=0;
	int x3=0;
	int x4=0;
	int x5=0;
	int x6=0;
	//membuat syarat agar setiap satu nilai dibelakang koma habis dibagi tiga bernilai benar
	if(belakangA % 3 == 0 && belakangA != 0){
		x1 =1;
	}
	if(belakangB % 3 == 0 && belakangB != 0){
		x2=1;
	}
	if(belakangC % 3 == 0 && belakangC != 0){
		
		x3=1;
	}
	if(belakangD % 3 == 0 && belakangD != 0){
		x4=1;
	}
	if(belakangE % 3 == 0 && belakangE != 0){
		x5=1;
	}
	if(belakangF % 3 == 0 && belakangF != 0){
		x6=1;
	}
	//membuat syarat agar minimal setiap 3 variabel float yang berada satu dibelakang koma habis dibagi tiga maka keluarannya valid
	if((x1 + x2 + x3 + x4 + x5 + x6) >= 3){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}

	return 0;
}