#include <stdio.h>
#include <string.h>

typedef struct{
	char string[100];
}kalimat;

int main(int argc, char const *argv[])
{
	int n;

	scanf("%d", &n);

	int i,j;

	kalimat input[n];
	int maxPanjang=0;
	int panjangString[n];
	int index1=0;
	for(i=0; i<n; i++){
		scanf("%s", &input[i].string);
		panjangString[i] = strlen(input[i].string);
		if(maxPanjang < strlen(input[i].string)){
			maxPanjang = strlen(input[i].string);
		}
	}

	char gabung[maxPanjang][n];
	printf("=====\n");
	for(i=0; i<maxPanjang; i++){
		for(j=0; j<n; j++){
			if(panjangString[j] < maxPanjang){
				index1 = maxPanjang - (maxPanjang - panjangString[j]) + i;
				if(index1 < maxPanjang){
					input[j].string[index1] = ' ';
					gabung[i][j] = input[j].string[index1];
					printf("%c",gabung[i][j]);
				}else{
					gabung[i][j] = input[j].string[i-(maxPanjang-panjangString[j])];
					printf("%c",gabung[i][j]);
				}
			}else{
				gabung[i][j] = input[j].string[i];
				printf("%c",gabung[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}