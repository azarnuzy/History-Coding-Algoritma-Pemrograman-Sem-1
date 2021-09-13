#include <stdio.h>

void pola(int n){
	int i,j;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("*");
		}

		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	pola(n);
	pola(n+1);
	pola(n+2);
	return 0;
}