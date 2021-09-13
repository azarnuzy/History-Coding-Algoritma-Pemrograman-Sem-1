#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int bil[n];
	int i;

	for(i=0; i<n; i++){
		scanf("%d", &bil[i]);
	}


	for(i=0; i<n; i++){
		if(bil[i] % 2 == 0){
			printf("%d A ",bil[i]);
		}else{
			printf("%d B ",bil[i] );
		}
	}
	return 0;
}