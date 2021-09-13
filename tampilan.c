#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int n;
	while(n != 9){
		printf("aku kamu dan dia\n");
	
		scanf("%d", &n);
	
		if(n>0 && n<10){
			system("cls");
		}
	}

	return 0;
}