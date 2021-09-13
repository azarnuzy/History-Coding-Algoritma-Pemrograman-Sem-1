#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int alas[n];
	int tinggi[n];
	int miring[n];
	int sikuSiku[n];
	int a[n];
	int t[n];
	int r[n];
	int i=0;

	for(i=0; i<n; i++){
		scanf("%d %d %d", &alas[i], &tinggi[i], &miring[i]);
	}

	for(i=0; i<n; i++){
		a[i] = alas[i] * alas[i];
		t[i] = tinggi[i] * tinggi[i];
		r[i] = miring[i] * miring[i];
	}


	int maks=0;
	int j=0;
	while((maks<3) && (j<n)){
		if(r[j] == (t[j] + a[j])){
			printf("segitiga ke-%d adalah segitiga siku-siku\n",j+1);
			maks+=1;
		}
		j+=1;
	}

	return 0;
}