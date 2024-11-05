// #include<stdio.h>
// int main(){
//     int i; 
//   unsigned long long count = 7272346022623563568;
//     for ( i = 2; i < count; i+i)
//     {
//         printf("%d",i);
//     }
//     printf("%s","deneme");
// }
#include <stdio.h>

int main() {
    int n;
    long first = 0, second = 1, next;

    printf("Hangi terimi görmek istersiniz? (0'dan başlayarak) ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0. terim: %ld\n", first);
        return 0;
    } else if (n == 1) {
        printf("1. terim: %ld\n", second);
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    printf("%d. terim: %ld\n", n, second);
    return 0;
}