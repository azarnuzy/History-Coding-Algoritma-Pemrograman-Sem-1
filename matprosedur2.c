#include <stdio.h>

int min, max=0; //variabel global

void getmin(int banyak, int angka[]){//prosedur yang berfungsi untuk mendapatkan nilai minimum
	min = angka[0];
	int i;
	for(i=0; i<banyak; i++){
		if(min > angka[i]){
			min = angka[i];
		}
	}
}

void getmax(int angka){//prosedur yang berfungsi untuk mendapatkan nilai maksimum
	int tampung = angka;
	if(tampung > max){
		max = tampung;
	}
}

void cetakjumlah(){//prosedur yang berfungsi untuk mencetak jumlah nilai min dan max
	printf("min : %d max : %d\n",min,max );
	printf("hasil pertambahan min dan max = %d\n",min+max );
}

int main(){
	int n;
	int i;

	scanf("%d", &n);//mengisi banyak jumlah data yang akan di input
	int deret[n];

	for(i=0; i<n; i++){
		scanf("%d", &deret[i]);//proses pengimputan
	}

	getmin(n, deret);//proses pemanggilan prosedur getmin
	
	for(i=0; i<n; i++){//proses perulangan untuk mengakses nilai deret
		getmax(deret[i]);
	}

	cetakjumlah();//proses pemanggilan prosedur cetakjumlah
	return 0;
}