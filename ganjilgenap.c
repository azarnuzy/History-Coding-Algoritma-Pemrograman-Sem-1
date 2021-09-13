#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	char hur;

	if(x % 2 == 1){
		for(int i =1; i<=3; i++){
			scanf("%d", &x);
			scanf("%c", &hur);
		}
		printf("masukkan valid\n");
	}

	return 0;
}