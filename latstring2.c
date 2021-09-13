#include<string.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
	char string[50];//membuat variabel string berupa char
	int i,j;//membuat variabel untuk digunakan di dalam for
	printf("masukkan : ");
	scanf("%s", string); // meminta user memasukkan string
	int akhir = strlen(string)-1; //membuat variabel untuk dijadikan panggilan  angka dari nomor akhir sampai setengah total jumlah huruf dalam string
	int awal = strlen(string)/2-1;//membuat variabel untuk dijadi panggilan dari setengah sampai awal total jumlah huruf dalam string

	for(i=0; i<strlen(string)/2; i++){
		for(j=0; j<=0; j++){
			printf("%c----", string[((akhir)-i)] );
		}
		printf("%c\n", string[awal]);
		awal = ((strlen(string)/2)-2) - i;
	}
	return 0;
}