#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[50];
	scanf("%s", &str);
	int i;
	
	printf("\n");
	printf("%d\n",strlen(str));
	for(i=0; i<strlen(str); i++){
		printf("%c\n",str[i] );
	}
	return 0;
}