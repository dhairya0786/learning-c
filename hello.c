#include <stdio.h>

void print_row (int row);
int main() {

    int hieght;
    do {
        printf("Enter the hieght : ");
        scanf("%d", &hieght);
    } while (hieght <= 0);

    for (int i = 0; i < hieght; i++) {
        print_row(i + 1);
    }

}

void print_row (int row) {
    for (int i = 0; i < row; i++) {
        printf("*");
    }
    printf("\n");
}