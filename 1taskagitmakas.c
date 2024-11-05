#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// 1 taş
// 2 kağıt
// 3 makas
int main()
{
    srand(time(NULL));
    printf("Oyun Baslatiliyor\n");
    printf("Lutfen Hamlenizi Seciniz tas icin[1],kagit icin [2],makas icin[3] degerini giriniz\n");
    int deger;
    int randomInRange;
    scanf("%d", &deger);
    if (deger == 1 || deger == 2 || deger == 3)
    {
        randomInRange = rand() % 3 + 1;
        if (deger == randomInRange)
        {
            printf("Beraberlik");
        }
        else if (randomInRange == 1)
        {
            if (deger == 2)
            {
                printf("Bilgisayar tasi secmishti Sen ise kagidi o yuzden kazandin");
            }
        }
        else if (randomInRange == 2)
        {
            if (deger == 3)
            {
                printf("Bilgisayar kagidi secmishti Sen ise makasi o yuzden kazandin");
            }
        }
        else if (randomInRange == 3)
        {
            if (deger == 1)
            {
                printf("Bilgisayar makasi secmisti Sen ise tasi o yuzden kazandin");
                ;
            }
        }
        else if (randomInRange == 2)
        {
            if (deger == 1)
            {
                printf("Bilgisayar Kagidi secmisti Sen ise tasi o yuzden kaybettin");
                ;
            }
        }
        else if (randomInRange == 3)
        {
            if (deger == 2)
            {
                printf("Bilgisayar makasi secmisti Sen ise kagidi o yuzden kaybettin");
                ;
            }
        }
        else if (randomInRange == 1)
        {
            if (deger == 3)
            {
                printf("Bilgisayar tasi secmishti Sen ise makasi o yuzden kaybettin");
            }
        }
    }
    else
    {

        printf("Lutfen programi tekrar baslatip Tekrar Seciniz Yanlis Olmadiğina Dikkat Ediniz");
        // scanf("%d", &deger);
        // return main ;
    }
}
