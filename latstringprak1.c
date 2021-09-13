#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char string[50][100];
	int i=0;
	do{
		scanf("%s", string[i]);
		i++;
	}while(strcmp(string[i-1], "mantul") != 0);

	int baris=0;
	baris = i;
	int jumlah[i];
	printf("=================\n");
	for(i=0; i<baris-1; i++){
		jumlah[i] = strlen(string[i]);
		printf("%d\n",jumlah[i]);
	}

	return 0;
}