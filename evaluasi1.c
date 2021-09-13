#include <stdio.h>


int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	char biner1[n];
	int i,j;

	for(i=0; i<n; i++){
		scanf(" %c", &biner1[i]);
	}

	int m;
	scanf("%d", &m);
	char biner2[m];

	for(i=0; i<m; i++){
		scanf(" %c", &biner2[i]);
	}

	int index[n+m];
	index[0] = 0;

	for(i=0; i<m+n; i++){
		for(j=0; j<; j++){

		}
	}

	for(i=0; i<m+n; i++){
		printf("%c",index[i] );
	}




	return 0;
}