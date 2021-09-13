#include <stdio.h>

void avgDepan(int n[3], int bilInt[3][50]){
	int i,j;
	int depan[3];
	int deret[3];
	int x;

	for(i=0; i<3; i++){
		depan[i] = 0;
		for(j=0; j<n[i]/2; j++){
			depan[i] = bilInt[i][j] + depan[i];
		}
		depan[i] = depan[i] / (n[i] / 2);
	}

	for(i=0; i<3; i++){
		deret[i] = 0;
		for(j=0; j<3; j++){
			if(deret[i] < depan[j] && depan[j] != x){
				deret[i] = depan[j];
			}
		}

		for(j=0; j<3; j++){
			if(deret[i] == depan[j]){
				depan[j] = x;
			}
		}

		if(i<2){
			printf("%d ",deret[i] );
		}
		else{
			printf("%d\n",deret[i] );
		}
	}
}

void avgBelakang(int n[3], int bilInt[3][50]){
	int i,j;
	int belakang[3];
	int x;
	int deret[3];

	for(i=0; i<3; i++){
		belakang[i] = 0;
		for(j=n[i]/2; j<n[i]; j++){
			belakang[i] = bilInt[i][j] + belakang[i];
		}
		belakang[i] = belakang[i] / (n[i] / 2);
	}

	for(i=0; i<3; i++){
		deret[i] = 0;
		for(j=0; j<3; j++){
			if(deret[i] < belakang[j] && belakang[j] != x){
				deret[i] = belakang[j];
			}
		}

		for(j=0; j<3; j++){
			if(deret[i] == belakang[j]){
				belakang[j] =x;
			}
		}

		if(i<2){
			printf("%d ",deret[i]);
		}else{
			printf("%d\n", deret[i]);
		}
	}
}

int main(int argc, char const *argv[])
{
	int n[3];
	int i,j;

	for(i=0; i<3; i++){
		scanf("%d", &n[i]);
	}

	int bilInt[3][50];

	for(i=0; i<3; i++){
		for(j=0; j<n[i]; j++){
			scanf("%d", &bilInt[i][j]);
		}
	}

	avgDepan(n,bilInt);
	avgBelakang(n, bilInt);
	return 0;
}