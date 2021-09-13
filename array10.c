#include <stdio.h>


typedef struct{
	char str[50];
}string;

int main(int argc, char const *argv[])
{
	string tabStr[10];

	int penghitung=0;

	printf("======MEMBUAT PROGRAM MEMUNCULKAN KATA YANG HURUF DEPANNYA HURUF 'a/A'======\n\n");

	for(penghitung=1; penghitung< 10; penghitung++){
		printf("masukkan kata %d: \n",penghitung);
		scanf("%s", &tabStr[penghitung].str);
		printf("\n");
	}

	for(penghitung=1; penghitung< 10; penghitung++){
		if((tabStr[penghitung].str[0] == 'A' || tabStr[penghitung].str[0] == 'a')){
			printf("kata %d yaitu : %s\n",penghitung, tabStr[penghitung].str);
		}
	}
	return 0;
}