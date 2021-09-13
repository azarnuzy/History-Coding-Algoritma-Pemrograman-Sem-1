#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m,n,x,y,cashback;

	printf("harga barang pertama : ");
	scanf("%d", &m);
	printf("harga barang kedua : ");
	scanf("%d", &n);
	printf("tanggal pembelian : ");
	scanf("%d", &x);
	printf("jam pembelian : ");
	scanf("%d", &y);


	if((m + n >=50000)){
		if((m<n)&&(x%2==0)&&(y%2!=0)){
			if(m<=100000){
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",m );
			}else if((m>100000)&&(m<=250000)){
				int b;
				b = m*0.75;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n", b);
			}else if((m>250000)&&(m<=500000)){
				int c;
				c = m*0.5;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",c );
			}else if((m>500000)&&(m<=1000000)){
				int d;
				d = m*0.3;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",d );
			}else if (m>1000000){
				int e;
				e = m*0.25;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",e );
			}
		}else if ((m<n)&&(x%2!=0)&&(y%2==0)){
			if(m<=100000){
				int a;
				a=m*0.5;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",a );
			}else if((m>100000)&&(m<=250000)){
				int b;
				b = m*0.35;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",b );
			}else if((m>250000)&&(m<=500000)){
				int c;
				c = m*0.2;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",c );
			}else if((m>500000)&&(m<=1000000)){
				int d;
				d = m*0.15;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",d );
			}else if (m>1000000){
				int e;
				e = m*0.1;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",e );
			}
		}
	}if((n<m)&&(x%2==0)&&(y%2!=0)){
			if(n<=100000){
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",n );
			}else if((n>100000)&&(n<=250000)){
				int b;
				b = n*0.75;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n", b);
			}else if((n>250000)&&(n<=500000)){
				int c;
				c = n*0.5;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",c );
			}else if((n>500000)&&(n<=1000000)){
				int d;
				d = n*0.3;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",d );
			}else if (n>1000000){
				int e;
				e = n*0.25;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",e );
			}
		}else if ((n<m)&&(x%2!=0)&&(y%2==0)){
			if(n<=100000){
				int a;
				a=n*0.5;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",a );
			}else if((n>100000)&&(n<=250000)){
				int b;
				b = n*0.35;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",b );
			}else if((n>250000)&&(n<=500000)){
				int c;
				c = n*0.2;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",c );
			}else if((n>500000)&&(n<=1000000)){
				int d;
				d = n*0.15;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",d );
			}else if (n>1000000){
				int e;
				e = n*0.1;
				printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESAR %d===\n",e );
			}
		}if((m<n)&& ( ((x%2==0)&&(y%2==0))||((x%2!=0)&&(y%2!=0)) )){
			int a;
			a = m*0.05;
			printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESRA %d===\n",a);
		}if((n<m)&& ( ((x%2==0)&&(y%2==0))||((x%2!=0)&&(y%2!=0)) )){
			int a;
			a = n*0.05;
			printf("===SELAMAT ANDA MENDAPATKAN CASHBACK SEBESRA %d===\n",a);
		}else{
			printf("MOHON MAAF KAMU BELUM LAKU :V \n" );
		}

	return 0;
}