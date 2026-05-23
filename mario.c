#include <stdio.h>


void print_row(int bricks) {
    for (int i = 0; i < bricks; i++) {
        printf("#");
    }
    printf("\n");
}

int main() {
    int height;

    do {
        printf("Height: ");
        scanf("%d", &height);
    } while (height < 0);

    for (int i = 1; i <= height; i++) {
        print_row(i);
    }
}
