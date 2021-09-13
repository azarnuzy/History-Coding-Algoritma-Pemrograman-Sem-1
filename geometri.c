#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int n;
	int rasio, total,awal;

	printf("masukkan nial a : ");
	scanf("%d", &awal);
	total = awal;

	printf("masukkan nilai rasio:  ");
	scanf("%d", &rasio);

	printf("masukkan nilai n : ");
	scanf("%d", &n);

	for(int i=0; i < n; i++){
		awal = awal * rasio;
		total = total+ awal;
	}

	return 0;
}