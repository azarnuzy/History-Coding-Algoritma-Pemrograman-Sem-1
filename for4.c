#include <stdio.h>

int main(int argc, char const *argv[])
{
	int fak_berapa, penghitung, hasil_faktorial;

	printf("masukkan angka faktorial yang akan dihitung \n");
	scanf("%d", &fak_berapa);

	printf("\n");

	hasil_faktorial = 1;

	for(penghitung=1; penghitung <= fak_berapa; penghitung++){

		hasil_faktorial = hasil_faktorial * penghitung;
		printf("%d\n", penghitung );
	}


	printf("hasil faktorial %d \n",hasil_faktorial );
	return 0;
}