#include<stdio.h>

int main(){
    int get_percentage;

  // Prompt the user to input their percentage and store 
    printf("Enter your percentage to know your grade: ");
    scanf("%d",&get_percentage);

  // Use switch statement to determine the grade based on percentage
    switch (get_percentage)
    {
    case 100:
    case 90:
        printf("A");
        break;
    case 80:
        printf("B");
        break;
    case 70:
        printf("C");
        break;
    case 60:
        printf("D");
        break;
    
    default:
        printf("Oops, try next time");
        break;
    }
}
