#include <stdio.h>

typedef struct{
	int nim,nilai;
}mahasiswa;


int main(int argc, char const *argv[])
{

	mahasiswa p1,p2,p3;
	printf("masukkan 3 nim dan 3 nilai secara berurut dibawah ini :  \n");
	scanf("%d", &p1.nim);
	scanf("%d", &p1.nilai);
	printf("\n");
	scanf("%d", &p2.nim);
	scanf("%d", &p2.nilai);
	printf("\n");
	scanf("%d", &p3.nim);
	scanf("%d", &p3.nilai);
	printf("\n");
	printf("Berikut merupakan daftar nilai siswa : \n");
	printf("1. nim = %d nilai = %d \n",p1.nim, p1.nilai );
	printf("2. nim = %d nilai = %d \n",p2.nim, p2.nilai );
	printf("3. nim = %d nilai = %d \n",p3.nim, p3.nilai );

	if(p1.nilai > p2. nilai || p1.nilai > p3.nilai){
		printf("Nim berikut %d mempunyai nilai terbesar yaitu %d \n", p1.nim,p1.nilai );
	}else if(p2.nilai > p1. nilai || p2.nilai > p3.nilai){
		printf("Nim berikut %d mempunyai nilai terbesar yaitu %d \n", p2.nim,p2.nilai );
	}else if(p3.nilai > p2. nilai || p3.nilai > p1.nilai){
		printf("Nim berikut %d mempunyai nilai terbesar yaitu %d \n", p3.nim,p3.nilai );
	}else{
		printf("nilai yang anda masukkan salah\n");
	}
	
	return 0;
}