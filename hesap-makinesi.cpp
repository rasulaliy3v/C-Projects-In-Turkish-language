#include<stdio.h>

int main() {
 
    float sayi1, sayi2, topSonuc, cikSonuc, bolSonuc, carpSonuc, islemSec;
 
    printf("Birinci Sayiyiyi Giriniz: ");
    scanf("%f", &sayi1);
 
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%f", &sayi2);
 
    printf("Bir islem seciniz:\n");
    printf("\tToplama islemi icin '1'\n"); 
    printf("\tCikarma islemi icin '2'\n"); 
    printf("\tCarpma islemi icin '3'\n");
    printf("\tBolme islemi icin '4'\n");
    printf("\tTum islemleri gostermek icin '5'\n");
    printf("Girilecek islemi seciniz: ");
    scanf("%f", &islemSec);
 
    if (islemSec == 1) {
 
        topSonuc = sayi1 + sayi2;
        printf("%+f%f = %f", sayi1, sayi2, topSonuc);
    }
    else if (islemSec == 2) {
 
        cikSonuc = sayi1 - sayi2;
        printf("%f-%f = %f", sayi1, sayi2, cikSonuc);
    }
    else if (islemSec == 3) {
 
        carpSonuc = sayi1 * sayi2;
        printf("%f*%f = %f", sayi1, sayi2, carpSonuc);
    }
    else if (islemSec == 4) { 
 
        bolSonuc = sayi1 / sayi2;
        printf("%f/%f = %f", sayi1, sayi2, bolSonuc);
    }
    else if (islemSec == 5) {
 
        topSonuc = sayi1 + sayi2;
        cikSonuc = sayi1 - sayi2;
        bolSonuc = (float)sayi1 / sayi2;
        carpSonuc = sayi1 * sayi2;
 
        printf("\t%f+%f = %f\n", sayi1, sayi2, topSonuc); 
        printf("\t%f-%f = %f\n", sayi1, sayi2, cikSonuc);
        printf("\t%f*%f = %f\n", sayi1, sayi2, carpSonuc);
        printf("\t%f/%f = %f\n", sayi1, sayi2, bolSonuc);
    }
    else {
 
        printf("Lutfen 1-4 araliginda bir deger giriniz.");
    }
 
    return 0; 
 
}

