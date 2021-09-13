#include <stdio.h>
#include <string.h>

int isPalindrom(char s[]){
	int i;
	i=0; 
	int status=0;
	status = 1;

	while(( i < strlen(s)) && (status == 1)){
		if( s[i] != s[strlen(s) - i - 1]){
			status =0;
		}

		i++;
	}

	return status;
}

int main(){

	char str[50];
	int hasil;

	printf("masukkan kata \n");
	scanf("%s", &str);

	hasil = isPalindrom(str);

	if(hasil == 1){
		printf("Palindrom\n");
	}else{
		printf("bukan Palindrom\n");
	}

	return 0;
}