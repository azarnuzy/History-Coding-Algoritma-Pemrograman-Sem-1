#include <stdio.h>

int sumArray(int n, int tabInt[]){
	int i;
	int hasil = 0;

	for(i=0; i<n; i++){
		hasil = hasil + tabInt[i];
	}

	return hasil;
}

int main(){
	int banyak;
	int hasil;

	printf("masukkan banyak elemen array\n");

	scanf("%d", &banyak);

	int tabInt[banyak];

	int i;

	for(i=0; i< banyak; i++){
		printf("masukkan angka\n");
		scanf("%d", &tabInt[i]);
	}

	hasil = sumArray(banyak, tabInt);

	printf("%d\n",hasil );

	return 0;
}