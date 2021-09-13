#include<stdio.h>

int main(int argc, char const *argv[])
{
	char c;
	int n;
	scanf("%c", &c);
	scanf("%d", &n);
	while(getchar()!= '\n');
	printf("c: %c\n", c);
	return 0;
}