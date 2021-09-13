#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("masukkan banyaknya angka pertama : ");
	scanf("%d", &n);
	int bilInt[n];
	int i;

	for(i=1; i<=n; i++){
		scanf("%d", &bilInt[i]);
	}

	int min=999999;
	for(i=1; i<= n; i++){
		if(bilInt[i] < min){
			min = bilInt[i];
		}
	}
	printf("%d\n", min );

	int m;
	printf("masukkan banyaknya angka kedua : ");
	scanf("%d", &m);
	int bilInt1[m];

	for(i=1; i<= m; i++){
		scanf("%d", &bilInt1[i]);
	}

	int max=0;
	for(i=1; i<=m; i++){
		if(max < bilInt1[i]){
			max = bilInt1[i];
		}
	}
	printf("%d\n", max );

	printf("jumlah maximal dari angka pertama dan minimal dari angka kedua : %d\n", min+max );

	return 0;
}