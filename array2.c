#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;

	scanf("%d", &n);


	int tabint[n];

	for(int i=0; i<n; i++){
		scanf("%d \n", &tabint[i] );
	}
	printf("\n\n");

	for(int i=0; i <n; i++){
		printf("%d\n", tabint[i]);
	}
	return 0;
}