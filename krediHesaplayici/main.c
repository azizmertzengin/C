#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Bu program bankadan kredi çekmek istediğinizde ödeyeceğiniz taksitleri ve toplam miktarı hesaplar.
Örneğin:
1,000,000 TL'ye bir araba almak istiyorsunuz ve bunun için 0.99 faizle 120 ay vadeli kredi çekmeniz gerekiyor.
Bunun için program
-Aylık ödeyeceğiniz miktar: 14,277.81 TL
-Toplamda ödenecek miktar: 1,713,337.27 TL
olarak sonuç verecektir.
*/

float kredi=0;
float faiz=0;
float taksit=0;
float tutar=0;

int main()
{
    printf ("Ne kadar kredi almak istersiniz (TL): ");
    scanf("%f" ,&kredi);
    printf("Faiz orani ne kadar: ");
    scanf ("%f", &faiz);
    faiz=faiz/100;
    printf ("Kac ayda odemek istersiniz: ");
    scanf ("%f",&taksit);
    tutar=(kredi*((faiz*pow(1+faiz, taksit))/(pow(1+faiz, taksit)-1)));
    printf("Aylik odeyeceginiz miktar: %.2f", tutar);
    printf ("\nToplam odenecek miktar: %.2f", tutar*taksit);
    getch();
    return 0;
}
