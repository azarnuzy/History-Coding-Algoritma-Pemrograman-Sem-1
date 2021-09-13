#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int n;
	scanf("%d", &n);
	int i;

	int bil1[n];
	for(i=0; i<n; i++){
		scanf("%d", &bil1[i]);
	}

	int bil2[n];
	for(i=0; i<n; i++){
		scanf("%d", &bil2[i]);
	}

	int x;
	for(i=0; i<n; i+=2){
		if((bil1[i] % 2 == 0) && (bil2[i] % 2 == 0)){
			x=1;
		}else{
			x=0;
		}
	}

	for(i=1; i<n; i+=2){
		if((bil1[i] % 2 != 0) && (bil2[i] % 2!= 0)){
			x=1;
		}else{
			x=0;
		}
	}

	if(x==1){
		printf("valid\n");
	}else if(x==0){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}
	return 0;
}