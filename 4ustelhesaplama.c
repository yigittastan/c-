#include <stdio.h>

int main()
{
    int us;
    int taban;
    int i;
    int ustel = 1; 

    printf("lutfen sirayla taban ve us giriniz:\n");
    scanf("%d", &taban);
    scanf("%d", &us);

    for (i = 0; i < us; i++)
    {
        ustel *= taban;
    }

    printf("%d", ustel);


}