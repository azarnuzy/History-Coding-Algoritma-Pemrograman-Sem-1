#include <stdio.h>

int isEqualArray( int n1, int tabInt1[], int n2, int tabInt2[]){

	int i;
	int status = 1;

	if( n1 != n2){
		status =0;
	}else{
		i=0;
		while((i< n1) && (status == 1)){
			if(tabInt1[i] != tabInt2[i]){
				status =0;
			}
			i++;
		}
	}
	return status;
}

int main(int argc, char const *argv[])
{
	int banyak;
	int hasil;

	printf("masukkan banyak elemen array \n");
	scanf("%d", &banyak);

	int tabInt1[banyak];
	int tabInt2[banyak];

	int i;

	for(i=0; i<banyak; i++){
		scanf("%d %d", &tabInt1[i], &tabInt2[i]);
	}

	hasil = isEqualArray(banyak, tabInt1, banyak, tabInt2);

	if(hasil == 1){
		printf("sama\n");
	}else{
		printf("tidak sama\n");
	}

	return 0;
}