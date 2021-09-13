#include <stdio.h>
#include <string.h>

typedef struct{
	char kata[50];
}string;
int main(int argc, char const *argv[])
{
	int n,i,j;
	scanf("%d", &n);
	string arr[n];
	int jumlah=0;
	for(i=0; i<n; i++){
		scanf("%s", &arr[i].kata);
	}

	for(i=0; i<n; i++){
		for(j=0; j<strlen(arr[i].kata); j++){
			if(arr[i].kata[j] == 'a'){
				jumlah++;
			}
		}
	}

	printf("%d\n",jumlah);
	return 0;
}