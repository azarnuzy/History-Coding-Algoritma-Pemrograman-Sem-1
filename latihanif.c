#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("menentukan bentuk segitiga\n");

	int a,b,c;
	int kuadratA,kuadratB,kuadratC;
	kuadratA = a*a;
	kuadratB = b*b;
	kuadratC = c*c;

	printf("masukkan 3 buah sisi segitiga: \n");
	printf("sisi 1 : ");
	scanf("%d", &a);
	printf("sisi 2 : ");
	scanf("%d", &b);
	printf("sisi 3 : ");
	scanf("%d", &c);

	if(((a==b)&&(a==c))){
		printf("ini adalah segitiga sama sisi\n");
	}else if(a==b || a==c || b==c){
		printf("ini adalah segitiga sama kaki\n");
	}else if((kuadratA = kuadratB + kuadratC)||(kuadratC=kuadratB+kuadratA)||(kuadratB= kuadratA+kuadratC)){
		printf("ini adalah segitiga siku-siku \n");
	}


	


	return 0;
}