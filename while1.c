#include <stdio.h>

int main(int argc, char const *argv[])
{
	int penghitung;
	int tabInt[5];
	int ketemu;

	for(penghitung=0; penghitung<5; penghitung++){
		printf("masukkan angka : ");
		scanf("%d", &tabInt[penghitung]);
	}

	ketemu=0; 
	penghitung=0;

	while((ketemu==0) && (penghitung<5)){
		if((tabInt[penghitung] % 2 == 1)){
			ketemu=1;
		}else{
			penghitung = penghitung+ 1;
		}
	}

	if(ketemu==0){
		printf("tidak ada angka ganjil\n");
	}else{
		printf("ada angka ganjil\n");
	}
	return 0;
}
