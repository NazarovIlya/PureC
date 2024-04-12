#include <stdio.h>

int main() {

    for (int i = 0; i < 49; i = i + 1) {
        printf("_");
    }
    printf("\n");

    for (int j = 0; j < 6; j = j + 1) {
        for (int g = 0; g < 8; g = g + 1) {
            printf("*");
        }
        for (int k = 0; k < 41; k = k + 1) {
            printf("_");
        }
        printf("\n");
    }

    for (int x = 0; x < 6; x = x + 1) {
        for (int k = 0; k < 49; k = k + 1) {
            printf("_");
        }
        printf("\n");
    }
    return 0;
}