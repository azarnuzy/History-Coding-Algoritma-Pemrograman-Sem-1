#include <stdio.h>

typedef struct{
	int x,y;
}titik;


int main(int argc, char const *argv[])
{
	int n,i, jx = 0, jy=0;
	scanf("%d", &n);
	titik ikatan_titik[n];

	for(i=0; i<n; i++){
		scanf("%d", &ikatan_titik[i].x);
		scanf("%d", &ikatan_titik[i].y);
	}

	for(i=0; i<n; i++){
		if((ikatan_titik[i].x % 2 == 1) && (ikatan_titik[i].x < ikatan_titik[i]. y)){
			printf("%d %d\n", ikatan_titik[i].x, ikatan_titik[i].y );
		}
	}
	return 0;
}