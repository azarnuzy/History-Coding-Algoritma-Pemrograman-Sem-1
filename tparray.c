#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int i;
	int jumlah1=0;

	char nama[n];
	for(i=0; i<n; i++){
		scanf(" %c", &nama[i]);
	}

	for(i=0; i<n; i++){
		jumlah1 = jumlah1 + nama[i];
	}

	for(i=0; i<n; i++){
		if((nama[i] == 'a') || (nama[i] == 'A') ||
		   (nama[i] == 'i') || (nama[i] == 'I') ||
		   (nama[i] == 'u') || (nama[i] == 'U') ||
		   (nama[i] == 'e') || (nama[i] == 'E') ||
		   (nama[i] == 'o') || (nama[i] == 'O') ){
			jumlah1 = jumlah1 + 4;
		}else{
			jumlah1 = jumlah1 + 5;
		}
	}

	int m;
	scanf("%d", &m);
	int jumlah2=0;
	char kode[m];
	for(i=0; i<m; i++){
		scanf(" %c", &kode[i]);
	}


	for(i=0; i<m; i++){
		if(kode[i] == '0'){
			kode[i] = 0;
		}
		else if(kode[i] == '1'){
			kode[i] = 1;
		}
		else if(kode[i] == '2'){
			kode[i] = 2;
		}
		else if(kode[i] == '3'){
			kode[i] = 3;
		}
		else if(kode[i] == '4'){
			kode[i] = 4;
		}
		else if(kode[i] == '5'){
			kode[i] = 5;
		}
		else if(kode[i] == '6'){
			kode[i] = 6;
		}
		else if(kode[i] == '7'){
			kode[i] = 7;
		}
		else if(kode[i] == '8'){
			kode[i] = 8;
		}
		else if(kode[i] == '9'){
			kode[i] = 9;
		}
	}

	for(i=0; i<m; i++){
		jumlah2 = jumlah2 + kode[i];
		printf("%d\n",jumlah2 );
	}

	int x;
	if(((jumlah1 % 2 == 0) && (jumlah2 % 2 == 0)) || ((jumlah1 % 2 != 0 ) && (jumlah2 % 2 != 0))){
		x=1;
	}else{
		x=0;
	}

	int y;
	for(i=0; i<m; i++){
		if((kode[i] >= 48) && (kode[i] <= 57) || (kode[i] >= 65) && (kode[i] <= 90) ||
			(kode[i] >= 97) && (kode[i] <= 122) ){
			y=1;
		}else{
			y=0;
		}
	}
	for(i=0; i<n; i++){
		if((nama[i] >= 65) && (nama[i] <= 90) ||
			(nama[i] >= 97) && (nama[i] <= 122) ){
			y=1;
		}else{
			y=0;
		}
	}

	if( y == 1 ){
		if(x == 1){
			printf("%d-",jumlah1);
			printf("%d ",jumlah2 );
			for(i=0;i<n;i++){
				printf("%c",nama[i]);
			}
			printf(" merupakan pelakunya\n");
		}else{
			printf("%d-",jumlah1);
			printf("%d ",jumlah2 );
			for(i=0;i<n;i++){
				printf("%c",nama[i]);
			}
			printf(" bukan pelakunya\n");
		}
	}

	

	return 0;
}