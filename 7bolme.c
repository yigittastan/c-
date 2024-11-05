#include <stdio.h>
int main()
{
    int sayi2;
    int bol;
    int sayi1;
    printf("lutfen bolme kalan bulam icin deger giriniz\n");
    scanf("%d", &sayi1);
    scanf("%d", &sayi2);
    bol = sayi1 / sayi2;
    printf("%d", bol);
}