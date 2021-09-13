#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[9][50];
	int i,j;
	int spasi;

	for(i=0; i<9; i++){
		printf("masukkan kata %d : ",i );
		scanf("%s", &str[i]);
	}

	spasi=0;
	for(i=1; i<9; i++){
		for(j=0; j<spasi; j++){
			printf(" ");
		}
		printf("%s\n", str[i] );
		spasi = spasi + strlen(str[i]);
	}
	return 0;
}