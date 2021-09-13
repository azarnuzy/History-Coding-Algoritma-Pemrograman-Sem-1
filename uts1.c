#include <stdio.h>
/*Saya Muhammad Azar Nuzy 2004191 mengerjakan soal UTS C1 dalam 
mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int baris,kolom;
	int operasi1=0;

	for(baris=1; baris<=n; baris++){
		operasi1=( ((n-1)*2)-1);
	}

	for(baris=1; baris<=1; baris++){
		for(kolom=1; kolom<= n*4-1; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<= n*2; kolom++){
			printf("*");
		}
		printf("\n");
	}


	for(baris=1; baris<= n-2; baris++){
		for(kolom=1; kolom<= n; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<= n-baris; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<= baris*2 -1; kolom++){
			printf("*");
		}
		for(kolom=1; kolom<= n-baris; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<= n; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<= n*2; kolom++){
			printf("*");
		}
		printf("\n");
	}

	for(baris=1; baris<=1; baris++){
		for(kolom=1; kolom<= n+1; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=(((n-1)*2)-1); kolom++){
			printf("*");
		}
		for(kolom=1; kolom<=n+1; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=n; kolom++){
			printf("*");
		}
		for(kolom=1; kolom<=n; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=n; kolom++){
			printf("*");
		}
		printf("\n");
	}

	for(baris=1; baris<=1; baris++){
		for(kolom=1; kolom<=n*4-1; kolom++){
			printf("*");
		}
		for(kolom=1; kolom<=n; kolom++){
			printf("*");
		}
		for(kolom=1; kolom<=n; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=n; kolom++){
			printf("*");
		}
		printf("\n");
	}

	for(baris=1; baris<=1; baris++){
		for(kolom=1; kolom<=1;kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=((((n*2)-1)*2)-1); kolom++){
			printf("*");
		}
		for(kolom=1; kolom<=1; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=n; kolom++){
			printf("*");
		}
		for(kolom=1; kolom<=n; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=n; kolom++){
			printf("*");
		}
		printf("\n");
	}
		
	for(baris=1; baris<= (n-1); baris++){
		for(kolom=1;kolom<=2+(baris-1); kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=((((n*2)-2)*2)-1-((baris-1)*2));kolom++){
			printf("*");
		}
		for(kolom=1; kolom<= baris; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=1; kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=n*2; kolom++){
			printf("*");
		}
		printf("\n");
	}

	for(baris=1; baris<= n-1; baris++){
		for(kolom=1; kolom<= (n+1)+((baris-1)); kolom++){
			printf(" ");
		}
		for(kolom=1; kolom<=(1+ ((n-1)-1)*2)-((baris-1)*2); kolom++){
			printf("*");
		}
		printf("\n");
	}


	return 0;
}