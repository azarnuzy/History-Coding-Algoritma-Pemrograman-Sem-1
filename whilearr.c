#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	int i=0,j;
	int bilInt[n];

	while(i<n){
		scanf("%d", &bilInt[i]);
		i++;
	}

	int cek=0;
	i=0;

	while(i<n && cek == 0){
		j=0;
		while(j<n && cek ==0){
			if(i != j ){
				if((bilInt[i] % bilInt[j] == 0)){
					cek=1;
				}
			}
			printf("%d %d ",bilInt[i], bilInt[j] );
			j++;
		}
		printf("\n");
		i++;
	}

	if(cek == 1){
		printf("ada kelipatan\n");
	}else{
		printf("tidak ada kelipatan\n");
	}

	return 0;
}