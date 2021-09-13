#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int bilInt[n];
	int jumlah=0;
	int akhir;
	int i;
	for(i=0; i< n; i++){
		scanf("%d", &bilInt[i]);
	}

	for(i=n/3 ; i<=(n/3-1) + n/3 ; i++){
		jumlah = jumlah + bilInt[i];
	}
	
	for(i= n-1; i< n; i++){
		akhir = bilInt[i];
	}

	if(jumlah == akhir){
		printf("sesuai spesifikasi\n");
	}else{
		printf("tidak sesuai spesifikasi\n");
	}

	return 0;

}