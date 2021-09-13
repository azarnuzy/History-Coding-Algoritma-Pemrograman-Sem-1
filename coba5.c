#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char input[100];
    int hurufsama[100];
    char tampungan[100];
    int beda = 0;
    scanf("%d", &n);
    char hurufmaks[n];
    int maks[n];
    scanf("%s", input);
    int i = 0, j = 0, k = 0;
    tampungan[0] = input[0];
    //padepokandombagarutpasirhalang
    //p
    k = 1;
    j = 0;
    int panjang;
    panjang = strlen(input);
    int p = panjang;
    int pTampung;
    pTampung = 1;
    //printf("pTampung : %d\n", pTampung);
    for ( i = 1; i < panjang; i++)
    {
        for ( j = 0; j < pTampung; j++)
        {
            if (input[i] != tampungan[j])
            {
                beda++;
            }
        }
        if (beda == pTampung)
        {
            tampungan[k] = input[i];
            k++;    
        }
        tampungan[k] = '\0';
        pTampung = strlen(tampungan);
        //printf("-> pTampung : %d\n", pTampung);
        beda = 0;
    }
    printf("%s\n", tampungan);
    for ( i = 0; i < k; i++)
    {
        hurufsama[i]=0;
        //maks[i]=0;
        for(j = 0; j < p-i; j++)
        {
            if (tampungan[i] == input[i+j])
            {
                hurufsama[i]++;
            }
        }
        /*for ( j = 0; j < n; j++)
        {
            if (hurufsama[i] < maks[j])
            {
                maks[j+1] = hurufsama[i];
                hurufmaks[i] = tampungan[i];
            }
        }*/
        printf("%c = %d\n", tampungan[i], hurufsama[i]);
        hurufsama[i] = 0;
    }
    /*
    for ( i = 0; i < strlen(input); i++)
    {
        hurufsama[i]=0;
        maks[i]=0;
        j = 0;
        while (j < strlen(input) && input[i+j] != 0)
        {
            if (input[i] == input[i+j])
            {
                hurufsama[i]++;
                if (tampungan[k] )
                {
                    
                }
                
                //input[i+j] = 0;
            }
            j++;
        }
        if (hurufsama[i] > maks[i])
        {
            maks[i] = hurufsama[i];
        }
        printf("%c %d\n", input[i], hurufsama[i]);
    }
    //printf("MAKS %d\n", maks[0]);*/

    int deret[100];
    for(i=0; i<k; i++){
        deret[i] = 0;
    }
    return 0;
}