#include <stdio.h>

int main(int argc, char const *argv[])
{
	char arr[6];

	int i;

	for(i=0; i<6; i++){
		scanf(" %c", &arr[i]);
	}

	int cek1=0,cek2=0;

	for(i=0; i<6; i++){
		if(i % 2 == 0){
			if(arr[i] == 'a' || arr[i] == 'i' || arr[i] == 'u' || arr[i] == 'e' || arr[i] == 'o'){
				cek1++;
			}else{
				cek2++;
			}
		}else{
			if((arr[i] == 'a' )|| (arr[i] == 'i') || (arr[i] == 'u' )|| (arr[i] == 'e') || (arr[i] == 'o')){
				cek2++;
			}else{
				cek1++;
			}
		}
	}

	if(cek1 == 6 || cek2 == 6){
		printf("kombinasi valid\n");
	}else{
		printf("kombinasi tidak valid\n");
	}

	int arrInt[6];

	for(i=0; i<6; i++){
		scanf("%d", &arrInt[i]);
	}

	for(i=0; i<6; i++){
		printf("%d ",arrInt[i] );
	}
	return 0;
}
