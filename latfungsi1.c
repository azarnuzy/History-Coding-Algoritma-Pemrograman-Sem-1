#include <stdio.h>

int hasilKali(int a, int b, int c){
	int hasil;

	hasil = a * b * c;

	return hasil;
}

int main(){
	int a,b,c;
	int hasil;
	a=1;
	b=5;
	c=6;

	hasil = hasilKali(a,b,c);

	printf("hasil perkalian : %d\n",hasil);

	return 0;
}