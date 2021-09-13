#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char string1[50];
	char string2[50];
	char string3[50];

	scanf("%s", string1);
	strcpy(string2,string1);
	strcpy(string3, "Copy_Me_Wkwk");

	printf("string pertama : %s\n",string1 );
	printf("string kedua : %s\n", string2 );
	printf("string ketiga : %s\n", string3 );
	return 0;
}