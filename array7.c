#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[50];
	int i;
	int jumlah;

	printf("masukkan kata: \n");
	scanf("%[^\n]", &str);
	printf("\n");

	jumlah=0;

	for(i=0; i< strlen(str);i++){
		if((str[i] == 'a') || (str[i]== 'i')
			|| str[i] == 'u' || str[i] == 'e'
			|| str[i] == 'o'){
			jumlah++;
		}
	}
	
	printf("%d\n", jumlah );
	return 0;
}