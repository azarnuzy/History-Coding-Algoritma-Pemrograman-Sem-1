#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int n,i,j,k;
	scanf("%d", &n);

	char input[n][100];
	int panjang[n];
	int maxpanjang = 0;

	for(i=0; i<n; ++i){
		scanf("%s", &input[i]);
		panjang[i]= strlen(input[i]);
		if(maxpanjang < panjang[i]){
			maxpanjang = panjang[i];
		}
	}

	char tampung[maxpanjang][n];

	for(i=0; i< maxpanjang; ++i){
		for(j=0; j<n; ++j){
			if(i < strlen(input[j])){
				tampung[i][j] = input[j][i];
			}
			else{
				tampung[i][j] = ' ';
			}
			printf("%c",tampung[i][j] );
		}
		printf("\n");
	}
	
	return 0;
}