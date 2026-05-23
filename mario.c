#include <stdio.h>
void print_row(int bricks) {
    for (int i = 0; i < bricks; i++) {
        printf("#");// Print a brick
    }
    printf("\n");
}
int main() {
    int height;
    printf("Height: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++) {
        print_row(i + 1);// Print a row of bricks
    }
}
