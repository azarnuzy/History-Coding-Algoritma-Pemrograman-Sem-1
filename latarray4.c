#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("masukkan banyaknya nilai : ");
	scanf("%d", &n);

	int bilInt[n];
	int i;

	for(i=1; i<=n; i++){
		scanf("%d", &bilInt[i]);
	}

	int min= 99999999;

	for(i=1; i<=n; i++){
		if(i % 2 ==0){
			if(min > bilInt[i]){
				min = bilInt[i];
			}
		}
	}

	printf("nilai minimal dari posisi genap adalah %d ",min );
	return 0;
}