#include <stdio.h>

int min, max=0;

void getmin(int m, int angka[]){
	min = angka[0];
	int i;

	for(i=0; i<m; i++){
		if(min > angka[i]){
			min = angka[i];
		}
	}
}

void getmax(int angka){
	int tampung = angka;

	if(tampung > max){
		max = tampung;
	}
}

void output(){
	printf("%d %d\n",min, max );
}

int main(int argc, char const *argv[])
{
	int n;
	int i;
	scanf("%d", &n);

	int angka[n];

	for(i=0; i<n; i++){
		scanf("%d", &angka[i]);
	}

	getmin(n, angka);

	for(i=0; i<n; i++){
		getmax(angka[i]);
	}

	output();
	return 0;
}