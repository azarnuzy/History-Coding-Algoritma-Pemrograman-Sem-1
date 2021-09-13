#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int tabInt[n];
	int penghitung;

	for(penghitung=0; penghitung<n; penghitung++){
		printf("masukkan angka : ");
		scanf("%d", &tabInt[penghiutng]);
		printf("\n");
	}

	penghitung = 0;
	int maks=0;

	while((maks<3) && (penghitung <n)){
		if(tabInt[penghitung] % 2 == 0){
			printf("%d\n", tabInt[penghitung]);
			maks++;
		}
		penghitung += 1;
	}
	return 0;
}