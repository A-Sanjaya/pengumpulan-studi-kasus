#include <stdio.h>
#include <stdlib.h>



int hitungPerTarif(int jam, int biaya)
{
    int penuh, sisa, biayaSisa, biayaPenuh;
    int i;
    sisa = jam % 24;
    penuh = jam - sisa;
    biaya = 0;
    if (sisa > 0)
    {

        if (sisa == 1)
        {
            biayaSisa = 3000;
        }
        else if (sisa <= 7)
        {
            biayaSisa = 3000;
            for ( i = 1; i < sisa; i++)
            biayaSisa = biayaSisa + 2000;
        }
        else
        {
            biayaSisa = 15000;
        }
    }
    else
    {
        biayaSisa = 0;
    }
    
        for (i = 0; i < penuh; i+=24)
        {   
            biayaPenuh += 15000;
        }
        biaya = biayaPenuh + biayaSisa;
    return biaya;
}
int main()
{
    system("cls");
    int ulang;
    int biaya = 0;
    int menit;

    do 
    {
        printf("Masukkan Durasi Parkir (Menit): ");
        scanf("%d", &menit);
        if (menit <= 0)
        {
            printf("Maaf, durasi harus lebih dari nol\n");
            ulang = 0;
        }
        else
        {
            int jam = 0, i;
            if (menit <= 60)
            {
                jam = 1;
            }
            else if (menit > 60)
            {
                for (i = 0; i < menit; i+=60)
                jam += 1;
            }
            
            
            int tarif = hitungPerTarif(jam, biaya);
            printf("Durasi parkir: %d (ditagih %d jam)\n", menit, jam);
            printf("Total biaya: %d\n", tarif);
            ulang = 1;
        }
        
        
    } while (ulang == 0);

    return 0;
}
