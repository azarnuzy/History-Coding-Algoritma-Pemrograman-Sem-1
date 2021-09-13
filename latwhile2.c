#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	float bil[n];
	int depan[n];
	int belakang[n];
	int i;

	for(i=0; i<n; i++){
		scanf("%f", &bil[i]);
	}

	for(i=0; i<n; i++){
		depan[i] = bil[i];
		belakang[i] = (bil[i] - depan[i]) * 10 + .5;
	}

	int j=0;
	while(j<n){
		if((depan[j] % 2 == 0) && (belakang[j] % 2 == 0)){
			printf("%.1f\n",bil[j] );
		}
		j++;
	}
	return 0;
}