#include <stdio.h>

typedef struct{
	char karakter;
	int bilangan;
}nim;

int main(int argc, char const *argv[])
{
	nim p1,p2,p3,q1,q2,q3,q4,q5,q6;

	scanf("%c%c%c%d%d%d%d%d%d", &p1.karakter,&p2.karakter,&p3.karakter,
								&q1.bilangan,&q2.bilangan,&q3.bilangan,&q4.bilangan,&q5.bilangan,&q6.bilangan);
	printf("%c%c%c%d%d%d%d%d%d",p1.karakter,p2.karakter,p3.karakter,
								q1.bilangan,q2.bilangan,q3.bilangan,q4.bilangan,q5.bilangan,q6.bilangan);


	return 0;
}