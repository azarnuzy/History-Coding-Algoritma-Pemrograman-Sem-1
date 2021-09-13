#include <stdio.h>

int main()
{
	int N;

	scanf("%d", &N);
	int hasil =1;

	for(int i =0; i<N; i++){
		int Bi;
		scanf("%d", &Bi);
		hasil = hasil * Bi;
	}

	printf("%d\n",hasil );
	return 0;
}