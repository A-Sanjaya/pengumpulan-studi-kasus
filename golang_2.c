#include <stdio.h>
#include <stdlib.h>

void tampilDenah ( char kursi[10][10], int baris, int kolom){

    for (int i = 0; i <= baris; i++){
        for (int j = 0; j <= kolom; j++){
             if (i == 0 && j == 0){
                printf("  ");
            }else if (i == 0 ){
                printf("%d ", j);
            }else if (j == 0){
                printf("%d ", i);
            }else{
                printf("%c ", kursi[i][j]);
            }
                
            }
            printf("\n");
        }
    }

int main(){
    int baris, kolom, pb, pk;
    char kursi[10][10];

    // system ("cls");
    do{
    printf("Masukkan Jumlah Baris (1-10) ");
    scanf("%d", &baris);
    }while (baris < 0 && baris >= 10);
    do{
        printf("Masukkan Jumlah Kolom (1-10) ");
        scanf("%d", &kolom);
    }while (kolom < 0 && kolom >= 10);

     for (int i = 0; i <= baris; i++){
        for (int j = 0; j <= kolom; j++){
                kursi[i][j] = 'O';
            
        }  
    }
    
    tampilDenah(kursi, baris, kolom);
    
    do {
        do{
            printf("Pesan Kursi Baris 0 dan Kolom 0 Untuk Selesai\n");
            printf("Pesan Kursi (Baris) ");
            scanf("%d", &pb);
            printf("Pesan Kursi (Kolom) ");
            scanf("%d", &pk);
        }while ( pb >= 10  && pk >= 10);
        
        kursi [pb][pk] = 'X';
        tampilDenah(kursi, baris, kolom);
    }while (pb != 0 && pk != 0);

}
