#include <stdio.h>

typedef struct{
	int panjang, lebar, tinggi,luasPermukaan, volume;
}titik;

int main(int argc, char const *argv[])
{
	titik x1;
	printf("Menghitung volume balok: \n");
	printf("panjang : ");
	scanf("%d",&x1.panjang);
	printf("lebar : ");
	scanf("%d",&x1.lebar);
	printf("tinggi : ");
	scanf("%d",&x1.tinggi);

	x1.luasPermukaan = (2*(x1.panjang*
		x1.lebar))+(2*(x1.panjang*x1.tinggi))+(2*(x1.tinggi*x1.lebar));
	printf("Luas permukaan balok tersebut adalah %d\n", x1.luasPermukaan );
	printf("Luas balok tersebut adalah %d \n", x1.panjang * x1.lebar * x1.tinggi );
	return 0;
}