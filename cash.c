#include <stdio.h>

int main() {
    
   int cents;

   do {
      printf("Change owed: ");
      scanf("%d", &cents);
   } while (cents < 0);

    int coins = 0;

    coins += cents / 25;
    cents = cents % 25;

    coins += cents / 10;
    cents = cents % 10;

    coins += cents / 5;
    cents = cents % 5;

    coins += cents / 1;
    cents = cents % 1;

    printf("Number of coins needed: %d\n", coins);
}
