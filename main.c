#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int dizi []= {4,8,3,84,47,76,9,24,68};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int aranan;//aranan eleman i�in belirtilen int yap�s�.
    int kucuk = 0; // aranan eleman ortadaki elemandan k���k olmas� durumunda kullan�lacak olan int tipi de�i�ken.
    int buyuk = n - 1; // aranan eleman ortadaki elemandan b�y�k olmas� durumunda kullan�lacak olan int tipi de�i�ken.
    int bulundu = 0;
    
    printf("Aranacak elemani giriniz: ");// Kullan�c�dan aranacak eleman�n istendi�i mesaj.
    scanf("%d", &aranan);// Kullan�c�dan aranacak eleman scanf yard�m� ile girilir.
    
    while (kucuk <= buyuk) {
        int orta = kucuk + (buyuk - kucuk) / 2;//Dizinin tam ortadan ikiye b�l�nmesi sa�lan�r.
        
        if (arr[orta] == aranan) {// E�er aranan eleman tam ortadaysa direkt yaz�l�r.
            printf("Aranan eleman %d. indiste bulundu.\n", orta);
            found = 1;
            break;
        } else if (dizi[orta] < aranan) {//Di�er olas�l�k aranan say�n�n ortadaki say�dan b�y�k olmas� ve arama i�leminin b�y�k say�lara do�ru devam etmesidir.
            kucuk = orta + 1;
        } else {// Son olas�l�k aranan say�n�n ortadaki say�dan k���k olmas� ve arama i�leminin sola (k���k say�lara) do�ru devam etmesidir.
            buyuk = orta - 1;
        }
    }
    
    if (!bulundu) {//Aranan eleman�n bulunamad��� durum i�in ko�ul kontrol� yap�l�r. E�er eleman dizide yoksa bulunamad� mesaj� ge�ilir.
        printf("Aranan eleman bulunamadi.\n");
    }
    
    return 0;
}
