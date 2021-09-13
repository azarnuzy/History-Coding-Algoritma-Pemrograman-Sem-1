//memberi masukkan sebanyak n
/*
input
5 variabel n;
//variabel arrInt[n];
12 array ke-0
13 array ke-1
14 array ke-2
15 array ke-3
16 array ke-4

output bilangan ganjil
12 array ke-0
14 array ke-2
16 array ke-4
*/
//keluaran merupakan masukkan dari array sebanyak n

/*
int arr[5] = {5,6,3,2,1}
*/

#include <stdio.h>

int main(){

	int n;
	scanf("%d", &n);

	int arr[n];
	int i;

	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	for(i=0; i<n; i++){
		if(arr[i] % 2 != 0){
			printf("%d\n",arr[i]);
		}
	}
	
	return 0;
}