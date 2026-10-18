#include <stdio.h>

int main(void) {
    int dizi[100] = {10, 20, 30, 40, 50};
    int n = 5, pos, val;
    int i;

    printf("Dizi: ");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    printf("\nKacinci siraya eleman eklenecek? ");
    scanf("%d", &pos);

    printf("Eklenecek sayiyi girin: ");
    scanf("%d", &val);

    if (pos < 1 || pos > n + 1) {
        printf("Gecersiz konum!");
    } else {
        for (i = n; i >= pos; i--) {
            dizi[i] = dizi[i - 1];
        }

        dizi[pos - 1] = val;
        n++;

        printf("Yeni dizi: ");
        for (i = 0; i < n; i++) {
            printf("%d ", dizi[i]);
        }
    }

    return 0;
}
