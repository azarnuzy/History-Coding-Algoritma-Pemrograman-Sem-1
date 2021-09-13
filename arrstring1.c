#include <stdio.h>
#include <string.h>

typedef struct{
	char kata[50];
}string;

int main(){
	int n,j,i;
	scanf("%d", &n);
	string arr[n];

	for(i=0; i<n; i++){
		scanf("%s", &arr[i].kata);
	}

	for(i=0; i<n; i++){
		for(j=0; j<strlen(arr[i].kata); j++){
			printf("%c ",arr[i].kata[j] );
		}
	}
}