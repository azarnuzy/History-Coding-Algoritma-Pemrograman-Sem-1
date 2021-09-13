#include <stdio.h>

int min[3], max[3],gabung[2][3];

void getmin(int n[3], int bilInt[3][50]){
	int i,j,k=0;
	int x;

	for(i=0; i<3; i++){
		for(j=0; j<n[i]; j++){
			if(min[i] > bilInt[i][j] && bilInt[i][j] != x){
				min[i] = bilInt[i][j];
			}
		}

		for(j=0; j<n[i]; j++){
			if(min[i] == bilInt[i][j]){
				bilInt[i][j] = x;
			}
		}
	}

	for(i=2; i>=0; i--){
		gabung[0][k] = min[i];
		if(i > 0){
			printf("%d ",gabung[0][k] );
		}else{
			printf("%d\n",gabung[0][k] );
		}
		k++;
	}
}

void getmax(int n[3], int bilInt[3][50]){
	int i,j,k=0;
	int x;

	for(i=0; i<3; i++){
		max[i] =0;
		for(j=0; j<n[i]; j++){
			if(max[i] < bilInt[i][j] && bilInt[i][j] != x){
				max[i] = bilInt[i][j];
			}
		}

		for(j=0; j<n[i]; j++){
			if(max[i] == bilInt[i][j]){
				bilInt[i][j] = x;
			}
		}
	}

	for(i=2; i>=0; i--){
		gabung[0][k] = max[i];
		if(i > 0){
			printf("%d ",gabung[1][k]);
		}else{
			printf("%d\n", gabung[1][k]);
		}
		k++;
	}
}


int main(int argc, char const *argv[])
{
	int i=0,j=0;
	
	int n[3];
	int bilInt[3][50];

	for(i=0; i<3; i++){
		scanf("%d", &n[i]);
		for(j=0; j<n[i]; j++){
			scanf("%d", &bilInt[i][j]);
		}
	}

	getmin(n,bilInt);
	getmax(n,bilInt);
	return 0;
}