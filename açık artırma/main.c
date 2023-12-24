//
//  main.c
//  açık artırma
//
//  Created by Ayça Eren on 24.12.2023.
//

#include <stdio.h>

struct urun { //ürüne ait özellikleri tanımatır.
    float baslangicfiyati;
    float teklif;
    float simdikifiyat;
    int teklifsayisi;
};

typedef struct urun urun;
 

int main(void) {
    urun urun;
    urun.teklifsayisi=0;
    
    while (1) {
            float yenifiyat;

            printf("Yeni teklif miktarını girin (son teklif ise 0'a basın): ");
            scanf("%f", &yenifiyat);

            if (yenifiyat == 0) {
                printf("--URUN SATILMISTIR ACIK ARTIRMA SONA ERDI--\n");
                break;
            }

            if (yenifiyat > urun.simdikifiyat ) {
                urun.simdikifiyat = yenifiyat;
                printf("Teklif kabul edildi. Yeni fiyat: --%.2f--\n",urun.simdikifiyat);

                urun.teklifsayisi++; // Teklif sayısını artırır
            }
        
            else {
                printf("Teklif yetersiz. Lütfen daha yüksek bir miktar girin.\n"); //şimdiki fiyatla aynı teklifi yaparsa kabul etmez.
            }
        }

        printf("Toplam teklif sayısı: %d\n", urun.teklifsayisi);
    
    return 0;
}


