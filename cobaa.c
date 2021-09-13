//header
#include<stdio.h>
#include<string.h>
int jumlah[5];
char customerA[20][25];
char customerB[20][25];
char customerC[20][25];
char customerD[20][25];
char customerE[20][25];
char deskripsiA[20][100];
char deskripsiB[20][100];
char deskripsiC[20][100];
char deskripsiD[20][100];
char deskripsiE[20][100];
 
void input();
void olahString(char nama[], char identitas, char bintang, char deskripsi[]);
void olahData(char nama[], char identitas, char bintang, char deskripsi[]);
void output();
 
//main
int main() {
	input();
	output();
	return 0;
}
 
//mesin
void input() {
	int n;
	scanf("%d", &n);
	char namaCustomer[25];
	char deskripsi[100];
	char identitas[5];
	char bintang[5];
	int i,j;
	for(i=0;i<n;i++) {
		j=0;
		while(namaCustomer[j-1]!='/') {
			scanf(" %c",&namaCustomer[j]);
			j++;
		}
		j=0;
		while (identitas[j-1]!='/') {
			scanf(" %c", &identitas[j]);
			j++;
		}
		j=0;
		while(bintang[j-1]!='/') {
			scanf(" %c", &bintang[j]);
			j++;
		}
		scanf("%s", deskripsi);
		olahString(namaCustomer, identitas[0], bintang[0], deskripsi);
	}
}
void olahString(char nama[], char identitas, char bintang, char deskripsi[]) {
	char namaCustomer[25];
	int i;
	for(i=0;i<strlen(nama)-1;i++) {
		if(nama[i]=='_') {
			nama[i]=' ';
		}
		namaCustomer[i]=nama[i];
	}
	for(i=0;i<strlen(deskripsi);i++) {
		if(deskripsi[i]=='_') {
			deskripsi[i]=' ';
		}
	}
	olahData(namaCustomer, identitas, bintang, deskripsi);	
}
 
void olahData(char nama[], char identitas, char bintang, char deskripsi[]) {
	int j=0;
	if(identitas=='T') {
		if(bintang=='1') {
			strcpy(customerA[jumlah[0]], nama);
			strcpy(deskripsiA[jumlah[0]],deskripsi);
			jumlah[0]++;
		}	
		else if(bintang=='2') {
			strcpy(customerB[jumlah[1]], nama);
			strcpy(deskripsiB[jumlah[1]],deskripsi);
			jumlah[1]++;
		}	
		else if(bintang=='3') {
			strcpy(customerC[jumlah[2]], nama);
			strcpy(deskripsiC[jumlah[2]],deskripsi);
			jumlah[2]++;
		}	
		else if(bintang=='4') {
			strcpy(customerD[jumlah[3]], nama);
			strcpy(deskripsiD[jumlah[3]],deskripsi);
			jumlah[3]++;
		}	
		else if(bintang=='5') {
			strcpy(customerE[jumlah[4]], nama);
			strcpy(deskripsiE[jumlah[4]],deskripsi);
			jumlah[4]++;
		}
	}
	else if (identitas=='A') {
		if(bintang=='1') {
			int j;
			for(j=0;j<strlen(nama);j++) {
				if (j==0||nama[j]==' ') {
					customerA[jumlah[0]][j]=nama[j];
				}
				else {
					customerA[jumlah[0]][j]='*';
				}
			}
			strcpy(deskripsiA[jumlah[0]],deskripsi);
			jumlah[0]++;
		}	
		else if(bintang=='2') {
			int j;
			for(j=0;j<strlen(nama);j++) {
				if (j==0||nama[j]==' ') {
					customerB[jumlah[1]][j]=nama[j];
				}
				else {
					customerB[jumlah[1]][j]='*';
				}
			}
			strcpy(deskripsiB[jumlah[1]],deskripsi);
			jumlah[1]++;
		}	
		else if(bintang=='3') {
			int j;
			for(j=0;j<strlen(nama);j++) {
				if (j==0||nama[j]==' ') {
					customerC[jumlah[2]][j]=nama[j];
				}
				else {
					customerC[jumlah[2]][j]='*';
				}
			}
			strcpy(deskripsiC[jumlah[2]],deskripsi);
			jumlah[2]++;
		}	
		else if(bintang=='4') {
			int j;
			for(j=0;j<strlen(nama);j++) {
				if (j==0||nama[j]==' ') {
					customerD[jumlah[3]][j]=nama[j];
				}
				else {
					customerD[jumlah[3]][j]='*';
				}
			}
			strcpy(deskripsiD[jumlah[3]],deskripsi);
			jumlah[3]++;
		}	
		else if(bintang=='5') {
			int j;
			for(j=0;j<strlen(nama);j++) {
				if (j==0||nama[j]==' ') {
					customerE[jumlah[4]][j]=nama[j];
				}
				else {
					customerE[jumlah[4]][j]='*';
				}
			}
			strcpy(deskripsiE[jumlah[4]],deskripsi);
			jumlah[4]++;
		}
	}
}
 
void output() {
	int i;
	if (jumlah[4]>0) {
		printf(">>> Review Bintang 5 <<<\n");
		printf("--------------------\n");
		for(i = 0; i < jumlah[4]; i++) {
			printf("%s\n", customerE[i]);
			printf("%s\n", deskripsiE[i]);
			printf("--------------------\n");
		}
	}
	if (jumlah[3]>0) {
		printf(">>> Review Bintang 4 <<<\n");
		printf("--------------------\n");
		for(i = 0; i < jumlah[3]; i++) {
			printf("%s\n", customerD[i]);
			printf("%s\n", deskripsiD[i]);
			printf("--------------------\n");
		}
	}
	if (jumlah[2]>0) {
		printf(">>> Review Bintang 3 <<<\n");
		printf("--------------------\n");
		for(i = 0; i < jumlah[2]; i++) {
			printf("%s\n", customerC[i]);
			printf("%s\n", deskripsiC[i]);
			printf("--------------------\n");
		}
	}
	if (jumlah[1]>0) {
		printf(">>> Review Bintang 2 <<<\n");
		printf("--------------------\n");
		for(i = 0; i < jumlah[1]; i++) {
			printf("%s\n", customerB[i]);
			printf("%s\n", deskripsiB[i]);
			printf("--------------------\n");
		}
	}
	if (jumlah[0]>0) {
		printf(">>> Review Bintang 1 <<<\n");
		printf("--------------------\n");
		for(i = 0; i < jumlah[0]; i++) {
			printf("%s\n", customerA[i]);
			printf("%s\n", deskripsiA[i]);
			printf("--------------------\n");
		}
	}
}