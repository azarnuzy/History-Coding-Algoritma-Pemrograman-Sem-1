#include <stdio.h>
#include <string.h>

typedef struct{
	char string1[50];
	char string2[50];
}array;

void compare(int n, array masukan[]){
	int i;

	for(i=0; i<n; i++){
		if(strlen(masukan[i].string1) < strlen(masukan[i].string2)){
			printf("%s < %s\n",masukan[i].string1, masukan[i].string2 );
		}else if(strlen(masukan[i].string1) > strlen(masukan[i].string2)){
			printf("%s > %s\n",masukan[i].string1,masukan[i].string2 );
		}else{
			printf("%s = %s\n",masukan[i].string1, masukan[i].string2 );
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	int i,j;
	array masukan[n];

	for(i=0; i<n; i++){
		scanf("%s %s", &masukan[i].string1, &masukan[i].string2);
	}

	compare(n, masukan);
	return 0;
}