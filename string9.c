#include <stdio.h>
#include <string.h>

typedef struct{
	char kata[50];
}string;

int main(int argc, char const *argv[])
{
	int n,i,j, status=1;
	scanf("%d", &n);
	string arr[n];
	i=0;

	for(i=0; i<n; i++){
		scanf("%s", &arr[i].kata);
	}

	while((i<n) && (status == 1)){
		int ada=0;
		j=0;
		while((j<strlen(arr[i].kata)) && (ada == 0)){
			if(arr[i].kata[j] == 'a'){
				ada =1;
			}else{
				j++;
			}
		}

		if(ada == 1){
			status = 0;
		}else{
			i++;
		}
	}

	if(status == 0 ){
		printf("tidak valid\n");
	}else{
		printf("valid\n");
	}
	return 0;
}