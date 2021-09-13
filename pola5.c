#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	int i,j;

	for(i=1; i<=n; i++){
		for(j=1; j<= (n-(i)); j++){
			printf(" ");
		}
		for(j=1; j<=n; j++){
			printf("*");
		}
		printf("\n");
	}

	for(i=1; i<n; i++){
		for(j=1; j<=i; j++ ){
			printf(" ");
		}
		for(j=1; j<=n; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}