#include <stdio.h>
/*
Write a program that defines a constant for tax rate and calculates the total cost including tax for an item

Guidance: Prompt for item price and calculate the total after applying the tax rate constant
*/
#define TAX_RATE 0.13

int main() {

  float itemPrice, totalCost;

  //prompt user
  printf("Enter the price of the item: ");
  scanf("%f", &itemPrice);

  //Calc cost
  totalCost = itemPrice + (itemPrice * TAX_RATE);

  //result
  printf("The total cost including tax is: $%.2f\n", totalCost);


  return 0;
}