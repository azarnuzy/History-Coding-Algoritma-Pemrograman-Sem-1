#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n );
	int i=0;

	char kode[n];
	int angka[n];

	while(i<n){
		scanf(" %c", &kode[i]);
		scanf("%d", &angka[i]);
		i++;
	}

	i=0;
	int j=0;
	int banyakbiner[n];
	int biner[50];
	int cek=0;
	int check=0;

	while(i<n){
		banyakbiner[i] = 1;
		i++;
	}

	i=0;

	while(i<n){
		while(j < angka[i]){
			if(j==0){
				j = 1;
			}else{
				j = j * 2;
				banyakbiner[i] = banyakbiner[i] + 1;
			} 
		}
		j=0;
		i++;
	}
	printf("konversi\n");

	i=0;
	j=0;
	while(i <n){
		printf("%c ",kode[i] );
		while(j < banyakbiner[i] - 1){
			biner[j] = angka[i] % 2;
			angka[i] = angka[i] / 2;
			j++;
		}
		j = j-1;
		while(j >= 0){
			if(biner[j] == 1){
				cek++;
			}
			printf("%d",biner[j]);
			j--;
		}
		if(cek > 3){
			check = 1;
		}
		cek = 0;
		j=0;

		printf("\n");
		i++;
	}


	if(check == 1){
		printf("cocok\n");
	}else{
		printf("tidak cocok\n");
	}


	return 0;
}