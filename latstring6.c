#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	int i;
	char arr[50];
	scanf("%s", &arr);
	
	for(i=0; i<strlen(arr); i++){
		if(arr[i] == 'a' || arr[i] == 'i' || arr[i] == 'u' || arr[i] == 'e' || arr[i] == 'o' ||
			arr[i] == 'A' || arr[i] == 'I' || arr[i] == 'U' || arr[i] == 'E' || arr[i] == 'O'){
			printf("%d",i);
		}else{
			printf("%c",arr[i]);
		}
	}
	return 0;
}