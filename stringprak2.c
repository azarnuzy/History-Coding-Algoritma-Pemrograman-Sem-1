#include <stdio.h>
#include <string.h>

typedef struct{
	char kata[100];
}kalimat;

int main(int argc, char const *argv[])
{
	int n, i, j;

	n=0; 
	kalimat input[50];

	do{
		scanf("%s", &input[n].kata);

		if(strcmp(input[n].kata, "selesai") != 0){
			n++;
		}
	}while(strcmp(input[n].kata, "selesai") != 0);

	if(n>0){
		printf("================\n");
		for(i=0; i<n; ++i){
			for(j=0; j< strlen(input[i].kata); ++j){
				printf("%c",input[i].kata[j] );
				if(j < strlen(input[i].kata)-1){
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}