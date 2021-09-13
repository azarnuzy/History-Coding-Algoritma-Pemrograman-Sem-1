#include <stdio.h>

int main(int argc, char const *argv[])
{
	//menjumlahkan angka dari angka satu sampai angka masukkan user

	int berapa_kali, hasil_jumlah, penghitung;

	hasil_jumlah = 0;

	printf("Masukkan angka berapa kali akan diulang: \n");
	scanf("%d", &berapa_kali); //memasukkan nilai yang nantinya akan menjadi syarat dari pengulangan

	printf("\n");
//		nilai awal    syarat pengulangan 			increement
	for(penghitung=1; penghitung <= berapa_kali; penghitung++){
		printf("%d\n", penghitung );
		hasil_jumlah = hasil_jumlah + penghitung;
	}

	printf("%d\n", hasil_jumlah );

	return 0;
}
