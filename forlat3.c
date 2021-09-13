#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int n;

	scanf("%d", &n);
	printf("\n");
	printf(">\n");
	printf(">>>>>\n");

	for(int i = 1; i <= n-2; i++){
		for(int j=1; j<=1; j++){
			printf(">");
		}
		for(int k=1; k<= i; k++){
			printf(" ");
		}
		for(int l=1; l<= 1; l++){
			printf(">");
		}
		for(int m=1; m<=i; m++){
			printf(" ");
		}
		for(int n=1; n<= 1; n++){
			printf(">");
		}
		for(int o=1; o<=i; o++){
			printf(" ");
		}
		for(int p=1; p<=1; p++){
			printf(">");
		}
		for(int q=1;q<=i;q++){
			printf(" ");
		}
		for(int r=1; r <=1; r++){
			printf(">");
		}
		printf("\n");
	}

		for(int i =1; i<= 5 *n -3; i++){
			printf(">");
		}


	return 0;
}