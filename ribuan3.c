#include <stdio.h>
/*Saya Muhammad Azar Nuzy 2004191 mengerjakan soal Kompetisi TP1 Alpro1 2020 C1 dalam 
mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
int main(int argc, char const *argv[])
{
	int a,b,c,d,e,f;//membuat variabel integer 

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);//membuat masukan berupa bilangan integer
	//membuat variabel boolean
	int x1=0;
	int x2=0;
	int x3=0;
	int x4=0;
	int x5=0;
	int x6=0;
	//membuat syarat untuk setiap variabel yang lebih dari 1000 bernilai benar
	if(a >=1000){
		x1=1;
	}
	if(b >=1000){
		x2=1;
	}
	if(c >=1000){
		x3=1;
	}
	if(d >=1000){
		x4=1;
	}
	if(e >=1000){
		x5=1;
	}
	if(f >=1000){
		x6=1;
	}
	//membuat syarat untuk setiap 3 atau lebih bilangan integer lebih dari seribu maka akan menampilkan nilai valid
	if((x1+x2+x3+x4+x5+x6) >= 3){
		printf("ribuan 3 atau lebih\n");
	}else{
		printf("tidak valid\n");
	}
	return 0;
}