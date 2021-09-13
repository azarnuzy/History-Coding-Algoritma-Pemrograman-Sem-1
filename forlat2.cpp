#include <cstdio>

int main(int argc, char const *argv[])
{
	int N,Bi;
	scanf("%d", &N);
	int hasil = 1;
	for(int i=1; i <= N; i++){
		scanf("%d", &Bi);

		hasil = hasil * Bi;
	}

	printf("%d\n", hasil );
	return 0;
}