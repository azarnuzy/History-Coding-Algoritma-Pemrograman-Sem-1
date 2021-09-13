#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int n;
	printf("masukkan banyaknya nilai : ");
	scanf("%d", &n);
	int bilInt[n];
	int i;

	for(i=1; i<=n; i++){
		scanf("%d", &bilInt[i]);
	}
	int jumlah = 0;
	for(i=1; i<=n; i++){
		jumlah = jumlah + bilInt[i];
	}

	printf("nilai rata rata dari nilai di atas adalah %d ", jumlah/n );


	return 0;
}