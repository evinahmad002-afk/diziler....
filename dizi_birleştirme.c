#include <stdio.h>

int main(void) {
    int dizi1[5] = {20, 30, 40, 50, 60};
    int dizi2[7] = {15, 22, 31, 45, 56, 62, 78};
    int dizi3[12];

    int i = 0, j = 0, k = 0;

    printf("Dizi1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", dizi1[i]);
    }

    printf("\nDizi2: ");
    for (j = 0; j < 7; j++) {
        printf("%d ", dizi2[j]);
    }

    i = 0;
    j = 0;

    while (i < 5 && j < 7) {
        if (dizi1[i] < dizi2[j]) {
            dizi3[k] = dizi1[i];
            i++;
        } else {
            dizi3[k] = dizi2[j];
            j++;
        }
        k++;
    }

    while (i < 5) {
        dizi3[k] = dizi1[i];
        i++;
        k++;
    }

    while (j < 7) {
        dizi3[k] = dizi2[j];
        j++;
        k++;
    }

    printf("\nDizi3 (Birlesmis Dizi): ");
    for (i = 0; i < 12; i++) {
        printf("%d ", dizi3[i]);
    }

    return 0;
}
