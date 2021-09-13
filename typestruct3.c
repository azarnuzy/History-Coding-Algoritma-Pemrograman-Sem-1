#include <stdio.h>

typedef struct {
	int nim, nilai;
}panggil;

int main(int argc, char const *argv[])
{
	panggil bil1, bil2, bil3;
	scanf("%d", &bil1.nim);
	scanf("%d", &bil2.nim);
	scanf("%d", &bil3.nim);

	printf("%d \n",bil1.nim );
	printf("%d \n",bil2.nim );
	printf("%d \n",bil3.nim );

	return 0;
}