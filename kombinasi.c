#include <stdio.h>
/*Saya Muhammad Azar Nuzy 2004191 mengerjakan soal Kompetisi TP1 Alpro1 2020 C1 dalam 
mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(int argc, char const *argv[])
{

	char a,b,c,d,e,f; //membuat variabel untuk karakter
	int x=0; //membuat variabel untuk boolean
	scanf("%c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);//meminta user memasukkan variabel karakter

	//membuat syarat untuk masukkan yang pertama bernilai integer dan yang kedua berupa huruf
	if(a >= '0' && a <= '9'){
		if(c >= '0' && c <= '9'){
			if(e >= '0' && e <= '9'){
				if(b >= 97 && b <= 122){
					if(d >= 97 && d <= 122){
						if(f >= 97 && f <= 122){
							x=1;
						}
					}
				}
			}
		}
	}
	//membuat syarat untuk masukan yang pertama huruf dan yang keduan berupa integer
else if(b >= '0' && b <= '9'){
		if(d >= '0' && d <= '9'){
			if(f >= '0' && f <= '9'){
				if(a >= 97 && a <= 122){
					if(c >= 97 && c <= 122){
						if(e >= 97 && e <= 122){
							x=1;
						}
					}
				}
			}
		}
	}

	//membuat syarat jika salah satu dari kedua syarat diatas terpenuhi maka akan menampilkan kombinasi valid
	if(x == 1){
		printf("kombinasi valid\n");
	}else{
		printf("kombinasi tidak valid\n");
	}

	return 0;
}