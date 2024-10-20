#include<stdio.h>

int main()
{
  / Declare variables 
    int num1, num2;
    char operator;

  // Prompt user for operation instructions and input
    printf("What you need to do:\nadd: +\nsubtract: -\nmultiply: *\ndivide: /\nremainder(modulus): %%\n\nEnter the operator based on the instructions above: ");
    scanf(" %c", &operator);
    
    printf("Enter your 1st number : ");
    scanf("%d", &num1);

    printf("Enter your 2nd number : ");
    scanf("%d", &num2);

  // Use switch-case to perform the selected operation
    switch (operator)
    {
    case '+':
        printf("Here your answer : %d",num1+num2);
        break;
    case '-':
        printf("Here your answer : %d",num1-num2);
        break;
    case '*':
        printf("Here your answer : %d",num1*num2);
        break;
    case '/':
        printf("Here your answer : %d",num1/num2);
        break;
    case '%':
        printf("Here your answer : %d",num1%num2);
        break;   
    default:
        printf("no match for the operator.\n");
        break;
    }
}
