#include<stdio.h>

int main(){
  // Variable to store the amount and currency choice
    float amount;
    short int currencyOption;

  //// Display options for currency conversion
    printf("1 for USD\n2 for EUR\n3 for GBP\nBase Currency is INR\n Enter your option: ");
    scanf(" %hd",&currencyOption);

  // Prompt user to enter the amount in INR
    printf("Enter your amount: ");
    scanf(" %f",&amount);

  // Perform conversion based on user's choice using a switch statement
    switch (currencyOption)
    {
    case 1:
        printf("Here your answer : %f USD",amount*0.012);
        break;
    case 2:
        printf("Here your answer : %f EUR",amount*0.011);
        break;
    case 3:
        printf("Here your answer : %f GBP",amount/100);
        break;
    default:
    printf("Sorry, no option matches. Please select a valid option.\n");
        break;
    }

    return 0;
}
