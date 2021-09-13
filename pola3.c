#include <stdio.h>

int main(int argc, char const *argv[])
{
	int bintang,baris,kolom;

	printf("masukkan jumlah bintang : ");
	scanf("%d", &bintang);

	for(baris=1; baris<=bintang/2; baris++){
		for(kolom=1; kolom<=baris-1; kolom++){
			printf(" ");
		}

		for(kolom=1; kolom<= bintang; kolom++){
			printf("*");
		}
		printf("\n");
	}

	if(bintang %2 ==1){
		for(kolom=1; kolom <= bintang/2; kolom++){
			printf(" ");
		}

		for(kolom=1; kolom<= bintang; kolom++){
			printf("*");
		}
		printf("\n");
	}

	for(baris=1; baris <= bintang/2; baris++){
		for(kolom=(bintang/2)-baris; kolom >= 1; kolom--){
			printf(" ");
		}

		for(kolom=1; kolom<=bintang; kolom++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}