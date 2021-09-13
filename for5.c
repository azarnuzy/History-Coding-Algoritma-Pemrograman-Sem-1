#include <stdio.h>

int main(int argc, char const *argv[])
{
	int baris,kolom, bintang;

	printf("masukkan banyak bintang : ");
	scanf("%d", &bintang );

	for(baris=1; baris <= bintang; baris++){
		for(kolom=1; kolom <= 3; kolom++ ){
			printf("1");
		}
		printf("2\n");
	}
	return 0;
}