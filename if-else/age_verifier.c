// that simple and short code which can show you can drive or not

#include<stdio.h>

int main(){
    short int age; //// Declare a short integer variable to store age
  
    printf("Enter your age for permission : ");
    scanf("%d", &age); // Read user's input and store it in the 'age' variable

  // Check if the user's age
    if(age <=5){
        printf("go and play with your toys cutie");
        }
    else if(age<=17){
        printf("You can drive only cycle");
    }
    else{
        printf("congo, You can");
    }
}
