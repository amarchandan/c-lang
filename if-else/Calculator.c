// that program performs basic arithmetic operations (addition, subtraction, multiplication, division, remainder) based on user input.

#include<stdio.h>

int main(){
  // Declare variables to store two numbers and the operator
    int first_value,second_value;
    char sign;

  // that Prompt help user for the operation type
    printf("What you need to do:\nadd: +\nsubtract: -\nmultiply: *\ndivide: /\nremainder(modulus): %%\n\nEnter the operator based on the instructions above: ");
    scanf("%c",&sign);
  
  // show prompt and read the first integer value
    printf("Type your first number : ");
    scanf("%d",&first_value);
  
  // show prompt and read the second integer value
    printf("Type your second number : ");
    scanf("%d",&second_value);

  // Perform the calculation based on the operator provided
    if (sign=='+'){     // Addition operation
        int sum = first_value + second_value;
        printf("Your answer is : %d",sum);
    }
    else if(sign=='-'){      // Subtraction operation
        int sub = first_value - second_value;
        printf("Your answer is : %d",sub);
    }
    else if (sign=='*'){          // Multiplication operation
        int mult = first_value * second_value;
        printf("Your answer is : %d",mult);
    }
    else if (sign=='/'){          // Division operation
        int div = first_value / second_value;
        printf("Your answer is : %d",div);
    }
    else if (sign=='%'){         //Remainder operation
        int rem = first_value % second_value;
        printf("Your answer is : %d",rem);
    }
    else {    // If operator is not recognized
        printf("sorry, something wrong retry.");
    }
    
}


// chatgpt Review 

// Final Thoughts:
// You're doing well, especially for a beginner. With the above tweaks, the code will become more robust and user-friendly!

// Final Rating: 7/10
