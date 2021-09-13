#include <stdio.h>

int main(int argc, char const *argv[])
{
	int bintang,baris,kolom,batas,bagianbawah;

	printf("masukkan banyaknya bintang : ");
	scanf("%d", &bintang);

	if(bintang%2 ==0){
		bagianbawah = bintang/2;
		batas = bintang -2;
	}else{
		bagianbawah = (bintang/2) + 1;
		batas= bintang - 1;
	}

	for(baris=1; baris<= bintang/2; baris++){
		for(kolom=1; kolom<= baris-1; kolom++){
			printf(" ");
		}

		for(kolom=1; kolom<=bintang; kolom++){
			printf("*");
		}

		for(kolom=1; kolom<= batas- ((baris -1)*2); kolom++){
			printf(" ");
		}

		for(kolom=1; kolom <= bintang; kolom++){
			printf("*");
		}

		printf("\n");
	}

	for(baris=1; baris<=bagianbawah; baris++){
		for(kolom=bagianbawah-baris; kolom>=1; kolom--){
			printf(" ");
		}

		for(kolom=1; kolom<=bintang; kolom++){
			printf("*");
		}

		for(kolom=1; kolom<= ((baris-1)*2); kolom++){
			printf(" ");
		}

		for(kolom=1; kolom<= bintang; kolom++){
			printf("*");
		}

		printf("\n");
	}

	/*if(bintang%2==1){
		for(kolom=1; kolom<= bintang/2;kolom++){
			printf(" ");
		}

		for(kolom=1; kolom<=bintang; kolom++){
			printf("*");
		}
		printf("\n");
	}

	for(baris=1; baris<=bintang/2; baris++){
		for(kolom=(bintang/2)-baris; kolom>= 1; kolom--){
			printf(" ");
		}
		for(kolom=1; kolom<= bintang; kolom++){
			printf("*");
		}
		printf("\n");
	}*/
	return 0;
}