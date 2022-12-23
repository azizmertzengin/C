#include <stdio.h>
int main()
{
    int n, t = 0, temp;
    printf("Lutfen bir tam sayi giriniz: ");
    scanf("%d", &n);
    temp = n;
    while( temp != 0 )
    {
        t = t * 10;
        t = t + temp % 10;
        temp = temp / 10;
    }
    if ( n == t )
        printf("%d palindromik bir sayidir.\n", n);
    else
        printf("%d palindromik bir sayi degildir\n", n);
    getch();
    return 0;
}
