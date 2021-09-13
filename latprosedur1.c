#include <stdio.h>

int rata1[3], rata2[3], gabung[6],hasil[6];

void depan(int n[3], int bilInt[3][20]){
	int i,j;
	for( i=0; i<3; i++){
		rata1[i] = 0;
		for(j =0 ; j< n[i]/2; j++){
			rata1[i] = rata1[i] + bilInt[i][j]; 
		}
		rata1[i] = rata1[i] / (n[i]/2);	
	}
}

void belakang(int n[3], int bilInt[3][20]){
	int i,j;
	for(i=0; i<3; i++){
		rata2[i] = 0;
		for(j=n[i]/2; j<n[i]; j++){
			rata2[i] = rata2[i] + bilInt[i][j];
		}
		rata2[i] = rata2[i] / (n[i]/2);
	}
}

void penggabungan(){
	int i,j,k=0;
	int x;
	for(i=0; i<3; i++){
		gabung[i] = rata1[i];
	}

	for(i=3; i<6; i++){
		gabung[i] = rata2[k];
		k++;
	}

	for(i=0; i<6; i++){
		hasil[i] = 99999;
		for(j=0; j<6; j++){
			if(hasil[i] > gabung[j] && gabung[j] != 0){
				hasil[i] = gabung[j];
			}
		}
		printf("%d ",hasil[i] );

		for(j=0; j<6; j++){
			if(hasil[i] == gabung[j]){
				gabung[j] = 0;
			}
		}
	}

	
}


int main(int argc, char const *argv[])
{
	int i,j;

	int n[3];
	int bilInt[3][20];

	for(i=0; i<3; i++){
		scanf("%d", &n[i]);
		for(j=0; j<n[i]; j++){
			scanf("%d", &bilInt[i][j]);
		}
	}

	depan(n,bilInt);
	belakang(n,bilInt);
	printf("bilangan berurutan berdasarkan rata-rata nilai depan dan belakang : ");
	penggabungan();
	return 0;
}