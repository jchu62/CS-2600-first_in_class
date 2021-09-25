// First, I will work on the tax and tip computations.
// Then, I will work on the randomization of the 4 dishes.
// Lastly, I will work on the input from the command line.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
float meal = 5.0;
float tax = 5.0;
float tip = 5.0;
float total = meal + (meal * tax) + (meal * tip);
printf("The meal cost is: %f\n", meal);
printf("The tax amount is: %f\n", tax);
printf("The tip amount is: %f\n", tip);
printf("The total for the meal including tip and taxes is: %f\n", total);
}