#include <stdio.h>

void piramid(int angka){
	int i,j;

	for(i=1; i<= angka; i++){
		for(j=1; j<= i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int angka;
	printf("masukkan angka piramid\n");
	scanf("%d", &angka);
	printf("\n");
	piramid(angka);
	return 0;
}