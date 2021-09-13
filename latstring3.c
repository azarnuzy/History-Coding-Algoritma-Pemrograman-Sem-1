#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	char string1[50];
	char string2[50];
	char string3[50];
	char string4[50];
	int i;
	scanf("%s", string1);
	scanf("%s", string2);
	scanf("%s", string3);
	scanf("%s", string4);

	int jumlah1=0,jumlah2=0,jumlah3=0,jumlah4=0;
	jumlah1 = strlen(string1);
	jumlah2 = strlen(string2);
	jumlah3 = strlen(string3);
	jumlah4 = strlen(string4);

	printf("================\n");
	if(jumlah1 > jumlah2 && jumlah1 > jumlah3 && jumlah1 > jumlah4){
		for(i=0; i<strlen(string1); i++){
			printf("%c",string1[i] );
		}
	}else if(jumlah2 > jumlah1 && jumlah2 > jumlah3 && jumlah2 > jumlah4){
		for(i=0; i<strlen(string2); i++){
			printf("%c",string2[i] );
		}
	}else if(jumlah3 > jumlah2 && jumlah3 > jumlah1 && jumlah3 > jumlah4){
		for(i=0; i<strlen(string3); i++){
			printf("%c",string3[i] );
		}
	}else{
		for(i=0; i<strlen(string4); i++){
			printf("%c",string4[i] );
		}
	}

	return 0;
}