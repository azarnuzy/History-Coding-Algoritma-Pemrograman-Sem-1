#include <stdio.h>
#include <string.h>

typedef struct{
	char string[100];
}kalimat;

int main(int argc, char const *argv[])
{
	kalimat arr1[20];
	int i=0;
	int panjangArr1[20];
	int banyakArr1 = 0;

	do{
		panjangArr1[i] = 0;
		scanf("%s", &arr1[i].string);
		panjangArr1[i] = strlen(arr1[i].string);
		banyakArr1++;
		i++;
	}while(strcmp(arr1[i-1].string,"ngak") != 0);

	kalimat arr2[banyakArr1];
	int panjangArr2[banyakArr1];
	banyakArr1 = banyakArr1 - 1;

	for(i=0; i<banyakArr1; i++){
		panjangArr2[i] = 0;
		scanf("%s", &arr2[i].string);
		panjangArr2[i] = strlen(arr2[i].string);
	}

	kalimat arr3[banyakArr1];
	int panjangArr3[banyakArr1];
	int maxPanjang=0;
	printf("\n");

	for(i=0; i<banyakArr1; i++){
		if(panjangArr2[i] > panjangArr1[i]){
			strcpy(arr3[i].string, arr2[i].string);
		}else{
			strcpy(arr3[i].string, arr1[i].string);
		}
		panjangArr3[i] = strlen(arr3[i].string);
		if(maxPanjang < strlen(arr3[i].string)){
			maxPanjang = strlen(arr3[i].string);
		}
	}

	maxPanjang = maxPanjang + banyakArr1;

	kalimat finalArr[maxPanjang];

	int j;

	for(i=0; i<maxPanjang; i++){
		for(j=0; j<banyakArr1; j++){
			if(j < i + 1 && i < banyakArr1){
				if(i-j < panjangArr3[j]){
					finalArr[i].string[j] = arr3[j].string[i-j];
				}else{
					arr3[j].string[i-j] = ' ';
					finalArr[i].string[j] = arr3[j].string[i-j];
				}
				printf("%c",finalArr[i].string[j]);
			}else if(i >= banyakArr1){
				if(i-j < panjangArr3[j]){
					finalArr[i].string[j] = arr3[j].string[i-j];
				}else{
					arr3[j].string[i-j] = ' ';
					finalArr[i].string[j] = arr3[j].string[i-j];
				}
				printf("%c",finalArr[i].string[j]);
			}
		}
		printf("\n");
	}
	return 0;
}