#include <stdio.h>
#include <string.h>

typedef struct{
	char kata[50];
}string;
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	string arr[n];
	int i,j;

	for(i=0;i<n; i++){
		scanf("%s", &arr[i].kata);
	}

	for(i=0; i<n; i++){
		for(j=0; j<strlen(arr[i].kata); j++){
			printf("%c", arr[i].kata[j] );
		}
		printf("\n");
	}
	return 0;
}