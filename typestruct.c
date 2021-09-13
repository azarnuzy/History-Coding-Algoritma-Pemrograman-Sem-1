#include <stdio.h>



typedef struct{
	int x;
	int y;
}titik;

int main(int argc, char const *argv[])
{
	titik p1;
	printf("masukkan koordinat x dan y\n ");
	scanf("%d%d", &p1.x,&p1.y);

	printf("Ini adalah koordinat titik x: %d dan ini adalah koordinat titik y : %d", p1.x,p1.y );

	return 0;
}

