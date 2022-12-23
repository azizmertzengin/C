#include <stdio.h>
#include <stdlib.h>

int asal(int sayi)
{
    int sayac = 0;
    for (int i = 1; i < sayi; i++)
    {
        if (sayi%i == 0)
        {
            sayac++;
        }
    }
    return sayac;
}

int main()
{
    int s1, sayac;
    printf("Sayi giriniz: ");
    scanf("%d", &s1);
    sayac = asal(s1);
    if (s1 == 2)
    {
        printf("Asal");
    }
    else if (sayac >= 2 || s1 < 2)
    {
        printf("Asal degil");
    }
    else
    {
        printf("Asal");
    }
    getch();
    return 0;
}
