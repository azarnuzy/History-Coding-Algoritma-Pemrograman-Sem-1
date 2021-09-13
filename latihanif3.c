#include <stdio.h>

int main()
{
	float bil;
	int depan,hasil;
	int belakang;
	
	printf("masukkan angka float: \n");
	scanf("%f", &bil);
	
	depan = bil;
	belakang = (bil-depan) * 10;

	if(belakang % depan == 0){
		printf("%d merupakan faktor dari %d\n",depan, belakang );
	}else{
		printf("%d bukan faktor dari %d\n",depan,belakang );
	}
	
	return 0;
}