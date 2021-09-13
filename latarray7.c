#include<stdio.h>
#include<string.h>
//MASIH SALAH!!!
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int bilInt[n];
	int min=0;
	int max=bilInt[0];
	int i;

	for(i=0; i<n; i++){
		scanf("%d", &bilInt[i]);
	}
	for(i=0; i<n; i++){
		if(min < bilInt[i]){
			min = bilInt[i];
		}

		if(max > bilInt[i]){
			max = bilInt[i];
		}
	}
	printf("%d\n",max );
	printf("%d\n",min );
		printf("%d\n",min * max );
		printf("%d\n",max - min );
	return 0;
}