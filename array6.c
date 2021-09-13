#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	int tabInt[n];
	int i;

	for(i = 0; i <n; i++){
		scanf("%d", &tabInt[i]);
	}

	int maksimal = tabInt[0];

	for(i=1; i<n; i++){
		if(maksimal < tabInt[i]){
			maksimal = tabInt[i];
		}
	}

	printf("nilai maksimmal adalah %d\n", maksimal );
	return 0;
}