#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[5][50];
	int penghitung,huruf;
	int jumlah = 0;

	for(penghitung=0; penghitung<5; penghitung++){
		printf("masukkan kata %d : ",penghitung );
		scanf("%s", &str[penghitung]);
		printf("\n\n");
	}

	for(penghitung=0; penghitung<5; penghitung++){
		for(huruf=0; huruf<strlen(str[penghitung]); huruf++){
			if(str[huruf][penghitung] == 'a' ||
				str[huruf][penghitung] == 'A'){
				jumlah = jumlah + 1;
			}
		}
	}

	printf("%d\n", jumlah );
	return 0;
}