#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	int bilInt[n];
	int i;

	for(i=0; i<n; i++){
		scanf("%d", &bilInt[i]);
	}

	int maksimal;

	maksimal = bilInt[0];

	for(i=1; i<n; i++){
		if(maksimal < bilInt[i]){
			if(bilInt[i] % 2 == 1){
				maksimal = bilInt[i];
			}
		}
	}

	printf("bilangan maksimal adalah : %d \n", maksimal );

	return 0;
}
