#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	printf("===================================\n");
	printf("SELAMAT DATANG DI TEMPAT PARKIR!!!!\n");
	printf("===================================\n");
	printf("           BIAYA PARKIR            \n");
	printf("1. MOTOR = RP. 1.500/JAM\n");
	printf("2. MOBIL = RP. 3.000/JAM\n");
	printf("3. BUS   = RP. 20.000/JAM\n");
	printf("4. TRUK  = RP. 50.000/JAM\n");
	printf("===================================\n");

	int jenisKendaraan;

	printf("Masukkan jenis kendaraan anda: \n");
	scanf("%d", &jenisKendaraan);

	int lamaParkir;

	printf("Masukkan berapa lama anda parkir\n");
	scanf("%d", &lamaParkir);

	char kendaraanKaryawan;
	printf("Kendaraan karyawan (y/n)\n");
	scanf(" %c", &kendaraanKaryawan);
	int biayaParkir = 0;

	switch(jenisKendaraan){
		case 1:
			biayaParkir = lamaParkir * 1500;
			break; 
		case 2:
			biayaParkir = lamaParkir * 3000;
			break;
		case 3: 
			biayaParkir = lamaParkir * 20000;
			break;
		case 4: 
			biayaParkir = lamaParkir * 50000;
			break;
		default:
			printf("=========================\n");
			printf("JENIS KENDARAAN TIDAK ADA\n");
			printf("=========================\n");
			break;
	}

	if(biayaParkir != 0 && jenisKendaraan >= 1 && jenisKendaraan <= 4){
		if(kendaraanKaryawan == 'y'){
			biayaParkir = biayaParkir / 2;
		}

		printf("==============================\n");
		printf("BIAYA PARKIR : %d\n", biayaParkir );
		printf("==============================\n");
	}else if(kendaraanKaryawan == 'n'){
		printf("==============================\n");
		printf("BIAYA PARKIR SEBESAR %d\n",biayaParkir );
		printf("==============================\n");
	}



	return 0;
}