#include <stdio.h>


/*
Write a program that calculates the total cost of items where each item’s price is a constant

Guidance: Use constants for item prices and calculate the total cost based on the number of items purchased
*/

#define ITEM1_PRICE 5.99  // Price of the first item
#define ITEM2_PRICE 3.49  // Price of the second item
#define ITEM3_PRICE 12.75 // Price of the third item

int main() {
    int quantity1, quantity2, quantity3;
    float totalCost;

    // Prompt the user for quantities of each item
    printf("Enter the quantity of item 1 (price $%.2f): ", ITEM1_PRICE);
    scanf("%d", &quantity1);  // Read quantity of item 1

    printf("Enter the quantity of item 2 (price $%.2f): ", ITEM2_PRICE);
    scanf("%d", &quantity2);  // Read quantity of item 2

    printf("Enter the quantity of item 3 (price $%.2f): ", ITEM3_PRICE);
    scanf("%d", &quantity3);  // Read quantity of item 3

    // Calculate the total cost
    totalCost = (ITEM1_PRICE * quantity1) + (ITEM2_PRICE * quantity2) + (ITEM3_PRICE * quantity3);

    // Print the result
    printf("The total cost is: $%.2f\n", totalCost);

    return 0;
}