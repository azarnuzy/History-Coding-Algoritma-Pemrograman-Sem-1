#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	int hasil;
	printf("masukkan 2 buah bilangan: \n");
	scanf("%d %d", &a,&b);

	if((a % 2 == 0)&&(b %2 ==0)){
		printf("bilangan tersebut adalah ");
		hasil = a+b;
		printf("%d",hasil );
	}else if( (a % 2 != 0) &&(b % 2 != 0)){
		printf("bilangan tersebut adalah %d %d", a,b);
	}else{
		printf("%d %d\n", a,b );
	}
	return 0;
}