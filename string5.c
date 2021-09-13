#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	char str[50];
	scanf("%s", &str);
	int i,j,k;
	int spasi=0;
	int akar=0;
	int jumlah=0;
	int tambah=0;

	jumlah = strlen(str);
	akar = sqrt(jumlah);

	for(i=1; i<=jumlah; i++){
		tambah++;
		printf("%d ",tambah-1 );
	}
	printf("%d\n",tambah );
	/*for(i=1; i<=akar; i++){
		for(j=1; j<= i*2-1; j++){
			printf("%d", j);
		}
		printf("\n");
	}*/

	for(i=0; i<akar; i++){
		
		for(j=1; j<=akar-i-1; j++ ){
			printf(" ");
		}

		for(j=1; j<= (i+1)*2-1; j++){
			printf("%d", j);
		}
		printf("\n");
		
	}

	return 0;
}