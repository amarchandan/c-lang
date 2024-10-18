// program that checks whether a number entered by the user is odd or even

#include<stdio.h>

int main() {
    int get_num; // Declare a variable to store the user's input
  // show Prompt and read the user's input
    printf("Enter your number : ");
    scanf("%d", &get_num);

  // Check if the number is 0
    if (get_num == 0){
        printf("Sorry, 0 is neither even nor odd.");
    }
    else{
      // Check the remainder
        if(get_num % 2 == 0){
            printf("Your number is even");
        }
        else{
            printf("Your number is odd");
        }
    }
}
