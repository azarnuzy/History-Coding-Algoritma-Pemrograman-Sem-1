#include <stdio.h>
#include <string.h>

typedef struct{
	char string[100][100];
}masukan;

typedef struct{
	int panjang[100];
}length;

masukan input(int n){
	int i;
	masukan x;
	for(i=0; i<n; i++){
		scanf("%s", &x.string[i]);
	}

	return x;
}

length getLength(masukan x, int n){
	int i;

	length y;

	for(i=0; i<n; i++){
		y.panjang[i] = strlen(x.string[i]);
	}

	return y;
}

void output(length y, int n){
	int i;

	for(i=0; i<n; i++){
		printf("%d\n", y.panjang[i] );
	}
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	masukan x;
	length y;

	x = input(n);
	y = getLength(x,n);

	output(y,n);
	return 0;
}