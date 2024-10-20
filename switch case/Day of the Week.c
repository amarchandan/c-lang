#include <stdio.h>

int main() {
    int get_input; // Variable to store the user's input

  // show the user to enter a number between 1 and 7 and store the variable
    printf("Enter a number (1-7): ");
    scanf("%d", &get_input);

  // Use switch-case to check the value of 'get_input' and print the corresponding day
    switch (get_input) {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Sorry, no match found. Please enter a number between 1 and 7.\n");
        break;
    }
}
