#include <stdio.h>


void ganjil(int n, int bilInt[]){
	int i;

	for(i=0; i<n; i++){
		if(bilInt[i] % 2 == 1){
			printf("%d ",bilInt[i] );
		}
	}
}

int main(int argc, char const *argv[])
{
	int i,n;

	scanf("%d", &n);

	int bilInt[n];
	for(i=0; i<n; i++){
		scanf("%d", &bilInt[i]);
	}

	ganjil(n,bilInt);
	return 0;
}
