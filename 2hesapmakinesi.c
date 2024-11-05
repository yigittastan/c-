#include <stdio.h>
int main()
{

   char ch;
   ch = getchar();
   int sayi1;
   int sayi2;
   int islem;
   // while (1)
   // {
   printf("Lutfen Islemi Belirleyin toplama icin(1),cikarma icin(2),carpma icin(3),bolme icin(4)'e tiklayin eğer hata yaparsaniz e tusuna basarak tekrar yazin\n");
   scanf("%d", &islem);
   // ch = getchar();
   // if (ch == 'E' || ch == 'e')
   // {
   //    continue;
   // }

   printf("isleminiz secilmistir lütfen sayilari giriniz\n");
   scanf("%d", &sayi1);
   scanf("%d", &sayi2);
   printf("islem yapiliyor...\n");
   if (islem == 1)
   {
      int top = sayi1 + sayi2;
      printf("Sonucunuz %d", top);
   }
   else if (islem == 2)
   {
      int cik = sayi1 - sayi2;
      printf("Sonucunuz %d", cik);
   }
   else if (islem == 3)
   {
      int carp = sayi1 * sayi2;
      printf("Sonucunuzc %d", carp);
   }
   else if (islem == 4)
   {
      int bol = sayi1 / sayi2;
      printf("Sonucunuz %d", bol);
   }
   // }
   // return 0;
}