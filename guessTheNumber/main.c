#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int favNum=0;
    int guess=0;
    srand(time(NULL));
    printf("Let's play a guess game. What is my favorite number in 1 and  25.");
    printf("\nYou have ten chance by the way. Guess it: \n");
    favNum = 1 + rand()%25;
    for(int i = 10; i > 0; i--)
    {
        printf("%d. Try: ",-i+11);
        scanf("%d", &guess);
        if (i == 1)
        {
            printf("You lost. My favorite number is %d.", favNum);
            break;
        }
        else if (favNum == guess)
        {
            printf("You won and you have %d life(s). Congratulations.", --i);
            break;
        }
    }
    getch();
    return 0;
}
