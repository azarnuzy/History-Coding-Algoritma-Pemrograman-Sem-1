#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	char string[50];
	scanf("%s", string);
	int i,x=0,y=0,z=0,a,b;

	for(i=0; i< strlen(string); i++){
		if(string[i] >= '0' && string[i] <= '9'){
			z++;
		}

		if(string[i] == 'A' || string[i] == 'I' || string[i] == 'U' || string[i] == 'E' || string[i] == 'O' ||
		   string[i] == 'a' || string[i] == 'i' || string[i] == 'u' || string[i] == 'e' || string[i] == 'o'){
			x++;
		}

		if((string[i] >= 97 && string[i] <= 122) || (string[i] >= 65 && string[i] <= 90)){
			if(string[i] != 'A'&& string[i] != 'I'&& string[i] != 'U'&& string[i] != 'E'&& string[i] != 'O'&&
		  	   string[i] != 'a'&& string[i] != 'i'&& string[i] != 'u'&& string[i] != 'e'&& string[i] != 'o'){
				y++;
			}
		}
	}
	

	printf("jumlah vokal %d\n",x );
	printf("jumlah konsonan %d\n",y );
	printf("jumlah angka %d\n", z);
	return 0;
}