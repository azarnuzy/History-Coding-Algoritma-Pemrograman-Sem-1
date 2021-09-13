#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	char string[200];
	char substring[100];
	int cek=0;
	int banyakstring=0;
	int x=0;
	int index[200];
	int hasil[200];
	int banyakkata=0;
	int i=0;
	int j=0,k=0,l=0;

	
	while(i >= 0 ){
		scanf(" %c", &string[i]);
		if( string[i] == '-'){
			break;
		}
		banyakstring++;
		i++;
	}
		

	scanf("%s", &substring);

	i=0;
	
	printf("hasil :\n");


	for(i=0; i<banyakstring; i++){

		for(j=0; j< strlen(substring); j++){

			if(string[j + i] == substring[j]){
				cek++;
			}

		}

		if(cek == strlen(substring)){
			for(j=0; j<strlen(substring); j++){
				string[j + i] = x;
			}
		}

		cek=0;
	}

	for(i=0; i<banyakstring; i++){
		if(string[i] == x){
			printf("");
		}else{
			printf("%c",string[i] );
			index[k] = i;
			banyakkata++;
		}
		k++;
	}
	printf("\n\n");
	
	for(i=0; i< sqrt(banyakkata); i++){

		for(j=sqrt(banyakkata)-i; j>0; j--){
			printf("*");
		}

		for(j=0; j< i*2 + 1; j++){
			if( string[index[k-1]]>=97 && string[index[k-1]]<=122 ){
				printf("%c",string[index[k-1]]+i );
			}	
			k--;
		}
		
		printf("\n");
	}

	
	return 0;
}