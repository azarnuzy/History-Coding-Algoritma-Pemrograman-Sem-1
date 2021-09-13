#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str1[50];
	char str2[50];
	scanf("%s", &str1);
	strcpy(str2,str1);
	int i;

	for(i=0; i<strlen(str2); i++){
		printf("%c\n",str2[i] );
	}
	return 0;
}