#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[50];
	scanf("%s", &str);
	int i,j;
	int spasi=0;

	for(i=0; i<strlen(str); i++){
		for(j=strlen(str)-i-1; j>0; j--){
			printf(" ");
		}
		printf("%c\n",str[i] );
		spasi++;
	}


	return 0;
}