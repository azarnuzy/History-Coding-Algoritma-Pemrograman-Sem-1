#include <stdio.h>
#include <string.h>

int isEqualStr(char str1[], char str2[]){
	int status;
	if(strcmp(str1,str2) == 0){
		status = 1;
	}else{
		status = 0;
	}

	return status;
}

int getmax(int n1, int n2){
	int hasil;

	if(n1 >= n2){
		hasil = n1;
	}else{
		hasil = n2;
	}

	return hasil;
}

void kotak(int n){

	int i,j;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	char str1[50];
	char str2[50];
	int hasil;

	printf("masukkan kata\n");
	scanf("%s", &str1);
	scanf("%s", &str2);
	int n1,n2;
	n1= strlen(str1);
	n2= strlen(str2);
	hasil = getmax(n1,n2);
	if(isEqualStr(str1, str2) == 0){
		kotak(strlen(str1));
	}else{
		kotak(hasil);
	}

	return 0;
}