#include <stdio.h>
#include <string.h>

typedef struct 
{
	char kata[100];
}kalimat;

int main(int argc, char const *argv[])
{
	int n,i;
	n=0;
	kalimat input[50];

	scanf("%s", &input[n].kata);

	while(strcmp(input[n].kata, "selesai") != 0){
		n++;
		scanf("%s", &input[n].kata);
	}

	if(n >0){
		printf("============\n");
		for(i=0; i<n; i++){
			printf("%s\n",input[i].kata );
		}
	}
	return 0;
}