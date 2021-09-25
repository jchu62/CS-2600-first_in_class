// First, I will work on the tax and tip computations.
// Then, I will work on the randomization of the 4 dishes.
// Lastly, I will work on the input from the command line.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
time_t t;
float meal;
float tax;
float tip;
char input[50];
printf("Enter a tax value:");
scanf("%f", &tax);
printf("Enter a tip value:");
scanf("%f", &tip);
srand((unsigned) time(&t));
int typeOfMeal = rand() % 4;
    switch (typeOfMeal){
        case 0:
        meal = 9.95;
        break;
        case 1:
        meal = 4.55;
        break;
        case 2:
        meal = 13.25;
        break;
        case 3:
        meal = 22.35;
        break;
        default:
        meal = 0.0;
    }
float total = meal + (meal * tax) + (meal * tip);
printf("The meal cost is: %f\n", meal);
printf("The tax amount is: %f\n", tax);
printf("The tip amount is: %f\n", tip);
printf("The total for the meal including tip and taxes is: %f\n", total);
return 0;
}