#include <stdio.h>
#include <string.h>

typedef struct{
	char kata[50];
}string;
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	int i =0,j=0;
	string arr[n];
	int spasi=0;

	for(i=0; i<n; i++){
		scanf("%s", &arr[i].kata);
	}

	for(i=0; i<n; i++){
		for(j=0; j<spasi; j++){
			printf(" ");
		}
		printf("%s\n", arr[i].kata);
		spasi = spasi + strlen(arr[i].kata);
	}

	return 0;
}