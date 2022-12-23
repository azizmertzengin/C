#include <stdio.h>

/*
Bu program 100,000'den düşük tam sayıları basamaklarına ayırır.
*/

int main(){
    int sayi, onlar, yuzler, obinler, birler, binler;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);
    obinler = sayi/10000;
    sayi = sayi-(obinler*10000);
    binler = sayi/1000;
    sayi = sayi-(binler*1000);
    yuzler = sayi/100;
    sayi = sayi-(yuzler*100);
    onlar = sayi/10;
    sayi = sayi-(onlar*10);
    birler = sayi;
    printf("Onbinler basamagi: %d\nBinler basamagi: %d\nYuzler basamagi: %d\nOnlar basamagi: %d\nBirler basamagi: %d",obinler,binler,yuzler,onlar,birler);
    getch();
    return 0;
}
