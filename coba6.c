#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char daftarNama[16][100] = {"muhammad", "rizal", "rifky", "sri"};

	int i,j;

	for(i=0; i<4; i++){
		for(j=0; j<strlen(daftarNama[i]); j++){
			printf("%c",daftarNama[i][j] );
		}
		printf("\n");
	}
	return 0;
}