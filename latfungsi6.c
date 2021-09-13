#include <stdio.h>
#include <string.h>

int pangkat(int* a, int b){
	int i;
	int temp = *a;

	for(i=0; i<b; i++){
		*a = *a * temp;
	}

	return *a;
}
int main(int argc, char const *argv[])
{
	int x, y;

	scanf("%d %d", &x, &y);

	printf("%s\n", );
	return 0;
}