#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Bu program cümlenin kaç kelimeden oluştuğunu ölçer. Bunu bulmak için önce boşluk sayısını bulur ve üzerine bir ekler.
Örneğin:
Bu cümlede kaç tane kelime var? => Cümlesinde 5 adet boşluk vardır.
Kurallara uyan her cümlede boşluk sayısının bir fazlasına eşit olacak kadar kelime olduğu için 6 kelime olduğunu bulur.
*/

int main()
{
    char cumle[100];
    int sayac = 0;
    printf("Bir cumle giriniz: ");
    gets(cumle);
    for (int i = 0; i < strlen(cumle); i++){
        if (cumle[i] == ' ' && cumle[i] != '  '){
            sayac++;
        }
    }
    printf("Bu cumlede %d adet kelime bulunmaktadir.", ++sayac);
    getch();
    return 0;
}
