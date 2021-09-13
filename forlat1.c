#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,n;

	scanf("%d", &n);

	for(i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			printf("+");
		}
		printf("\n");
	};

	for(i=1; i<=n;i++){
		for(int j=n; j>=i; j--){
			printf("+");
		}
		printf("\n");
	}
	printf("\n");

	for(i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			printf(" ");
		}for(int k=n; k>=i; k--){
			printf("+");
		}
		printf("\n");
	}

	for(i=1; i <=n; i++){
		for(int j=n; j>i; j--){
			printf(" ");
		}for(int k=1; k<=i; k++){
			printf("+");
		}
		printf("\n");
	}
	printf("\n");

	for(i=1; i<= n; i++){
		for(int j=n; j>i; j--){
			printf(" ");
		}for(int k=1; k<= n; k++){
			printf("+");
		}
		printf("\n");
	}

	return 0;
}