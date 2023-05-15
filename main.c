#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int dizi []= {4,8,3,84,47,76,9,24,68};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int aranan;//aranan eleman için belirtilen int yapýsý.
    int kucuk = 0; // aranan eleman ortadaki elemandan küçük olmasý durumunda kullanýlacak olan int tipi deðiþken.
    int buyuk = n - 1; // aranan eleman ortadaki elemandan büyük olmasý durumunda kullanýlacak olan int tipi deðiþken.
    int bulundu = 0;
    
    printf("Aranacak elemani giriniz: ");// Kullanýcýdan aranacak elemanýn istendiði mesaj.
    scanf("%d", &aranan);// Kullanýcýdan aranacak eleman scanf yardýmý ile girilir.
    
    while (kucuk <= buyuk) {
        int orta = kucuk + (buyuk - kucuk) / 2;//Dizinin tam ortadan ikiye bölünmesi saðlanýr.
        
        if (arr[orta] == aranan) {// Eðer aranan eleman tam ortadaysa direkt yazýlýr.
            printf("Aranan eleman %d. indiste bulundu.\n", orta);
            found = 1;
            break;
        } else if (dizi[orta] < aranan) {//Diðer olasýlýk aranan sayýnýn ortadaki sayýdan büyük olmasý ve arama iþleminin büyük sayýlara doðru devam etmesidir.
            kucuk = orta + 1;
        } else {// Son olasýlýk aranan sayýnýn ortadaki sayýdan küçük olmasý ve arama iþleminin sola (küçük sayýlara) doðru devam etmesidir.
            buyuk = orta - 1;
        }
    }
    
    if (!bulundu) {//Aranan elemanýn bulunamadýðý durum için koþul kontrolü yapýlýr. Eðer eleman dizide yoksa bulunamadý mesajý geçilir.
        printf("Aranan eleman bulunamadi.\n");
    }
    
    return 0;
}
