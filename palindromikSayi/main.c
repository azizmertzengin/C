#include <stdio.h>
#include <stdlib.h>

/*
Bu program yazılan sayının palindromik olup olmadığını kontrol eder.
Palindromik sayılar tersten yazıldığında da aynı sayıyı verir.
Örneğin:
1881 bir palindromik sayıdır.
1938 ise palindromik bir sayı değildir.
*/

int main()
{
    int sayi=0;
    int yuz=0;
    int on=0;
    int bir=0;
    int pal=0;
    int remember=0;
    printf("0 ile 1000 arasinda bir sayi giriniz: ");
    scanf ("%d", &sayi);
    if (sayi >10 && sayi< 100)
    {
        remember=sayi;
        on=sayi/10;
        sayi=sayi-(on*10);
        bir=sayi;
        printf("Sayinin tersine cevrilmis hali: %d%d",bir,on);
        pal=+(bir*10)+(on*1);
        if (remember==pal)
        {
            printf("\nSayi palindromik ve yazdigin sayi: %d", remember);
        }
        else
        {
            printf("\nYazdigin sayi palindromik degil ve yazdigin sayi: %d", remember);
        }
    }


    else if (sayi > 100 && sayi < 1000)
    {
        remember=sayi;
        yuz=sayi/100;
        sayi=sayi-(yuz*100);
        on=sayi/10;
        sayi=sayi-(on*10);
        bir=sayi;
        printf("Sayinin tersine cevrilmis hali: %d%d%d",bir,on,yuz);
        pal=+(bir*100)+(on*10)+(yuz);
        if (remember==pal)
        {
            printf("\nSayi palindromik ve yazdigin sayi: %d", remember);
        }
        else
        {
            printf("\nYazdigin sayi palindromik degil ve yazdigin sayi: %d", remember);
        }
    }

    else if (sayi > 0 && sayi < 10)
    {
        remember=sayi;
        bir=sayi;
        printf("Sayinin tersine cevrilmis hali: %d",bir);
        pal=+(bir*1);
        if (remember==pal)
        {
            printf("\nSayi palindromik ve yazdigin sayi: %d", remember);
        }
    }
    getch();
    return 0;
}
