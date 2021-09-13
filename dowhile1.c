#include <stdio.h>

int main(int argc, char const *argv[])
{
	int total=0, n;
	printf("selamat datang di RM masakan padang\n");

	do{
		printf("mau pesan apa ?\n");
		printf("1. Rendang - Rp.10.0000\n");
		printf("2. Kepala Kakap - Rp.30.000\n");
		printf("3. Teh Talau - Rp.5.000\n");
		printf("4. Ayam Cabai Hijau - Rp.8.000\n");
		printf("5. Daging Cincang - Rp.10.000\n");
		printf("6. Nasi Putih - Rp.2000\n");
		scanf("%d", &n);

		if(n==1){
			total += 10000;
		}else if(n==2){
			total += 30000;
		}else if(n==3){
			total += 5000;
		}else if(n==4){
			total += 8000;
		}else if(n == 5){
			total += 10000;
		}else if(n==6){
			total += 2000;
		}else{
			printf("pesanan tidak ada\n");
		}
	}while(n != 0);

	printf("==============\n");
	printf("Total Biaya Pesanan Anda Adalah : Rp.%d\n", total );
	return 0;
}