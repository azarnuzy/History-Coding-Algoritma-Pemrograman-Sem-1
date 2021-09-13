#include <stdio.h>

void tampilArr(int n, int bilInt[]){
	int i;

	for(i=0; i<n; i++){
		printf("%d ",bilInt[i] );
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

	tampilArr(n,bilInt);
	return 0;
}