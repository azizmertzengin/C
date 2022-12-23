#include <stdio.h>
#include <stdlib.h>

int dd=0;
int mm=0;
int yyyy=0;
int bdd=0;
int bmm=0;
int byyyy=0;

int main()
{
    today:
    printf ("What is today's date (dd/mm/yyyy):\n ");
    scanf ("%d/%d/%d", &dd, &mm, &yyyy);
    if (dd>31)
    {
        printf("Wrong day. Try again. ");
        goto today;
    }
    if (mm>12)
    {
        printf("Wrong month. Try again. ");
        goto today;
    }
    bd:
    printf("What is your birthday date? (dd/mm/yyyy):\n");
    scanf("%d/%d/%d",&bdd, &bmm, &byyyy);
    if (bdd>31)
    {
        printf("Wrong day. Try again. ");
        goto bd;
    }
    if (bmm>12)
    {
        printf("Wrong month. Try again. ");
        goto bd;
    }
    if (byyyy>yyyy)
    {
        printf("You didn't born yet. Try again. ");
        goto bd;
    }
    if (mm>=bmm)
    {
        if (dd>=bdd)
        {
            printf ("\nYou are %d years old.", yyyy-byyyy);
        }
        else
        {
            printf("\nYou are %d years old.", yyyy-byyyy-1);
        }
    }
    else
    {
        printf("\nYou are %d years old.", yyyy-byyyy-1);
    }
    getch();
    return 0;
}
