#include <stdio.h>
/*Saya Muhammad Azar Nuzy 2004191 mengerjakan soal Kompetisi TP1 Alpro1 2020 C1 dalam 
mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
int main(int argc, char const *argv[])
{
	char a,b,c,d,e,f;//membuat variabel karakter untuk huruf
	int x=0;//membuat nilai untuk dijadikan bool

	scanf("%c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);//meminta user memasukan karakter huruf
	//membuat suarat kombinasi untuk yang pertama merupakan vokal dan yang kedua konsonan
	if(a == 'a' || a == 'i' || a == 'u' || a == 'e' || a == 'o'){
		if(b >=97 && b <= 122){
			if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'){
				if(d >=97 && d <= 122){
					if(e == 'a' || e == 'i' || e == 'u' || e == 'e' || e == 'o'){
						if(f >=97 && f <= 122){
							x=1;
						}
					}
				}
			}
		}
	}
	//membuat syarat kombinasi untuk yang pertama merupakan konsonan dan yang kedua vokal
	else if(a >=97 && a <= 122){
		if(b == 'a' || b == 'i' || b == 'u' || b == 'e' || b == 'o'){
			if(c >=97 && c <= 122){
				if(d == 'a' || d == 'i' || d == 'u' || d == 'e' || d == 'o'){
					if(e >=97 && e <= 122){
						if(f == 'a' || f == 'i' || f == 'u' || f == 'e' || f == 'o'){
							x=1;
						}
					}
				}
			}
		}
	}
	//membuat syarat jika dari salah satu syarat di atas terpenuhi maka akan menghasilkan keluaran kombinasi valid
	if(x ==1 ){
		printf("kombinasi valid\n");
	}
	//membuat syarat jika dari salah satu syarat di atas tidak terpenuhi maka akan menghasilkan keluaran kombinasi tidak valid
	else{
		printf("kombinasi tidak valid\n");
	}

	
	return 0;
}