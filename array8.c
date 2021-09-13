#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	int i,j,spasi;

	char str[50];

	scanf("%s", &str);
	printf("\n");

	spasi = 0;

	for(i=0; i< strlen(str); i++){
		for(j=0; j< spasi; j++){
			printf(" ");
		}
		printf("%c\n", str[i]);
		spasi++;
	}


	return 0;
}