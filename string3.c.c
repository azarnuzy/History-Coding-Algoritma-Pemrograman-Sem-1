#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str1[50];
	char str2[50];

	scanf("%s", &str1);
	scanf("%s", &str2);

	printf("%d\n",strcmp(str1,str2) );
	if(strcmp(str1,str2) == 0){
		printf("string sama\n");
	}else{
		printf("string tidak sama\n");
	}
	return 0;
}