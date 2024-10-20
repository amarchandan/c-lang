#include<stdio.h>

int main(){
    int option;
    
    //// Displaying traffic light options
    printf("1 for Red\n2 for Yellow\n3 for Green\n\nEnter your option: ");
    scanf("%d",&option);

    ///// Switch case to handle user input
    switch (option)
    {
    case 1:
        printf("Stop");
        break;
    case 2:
        printf("Get Ready");
        break;
    case 3:
        printf("Go");
        break;
    
    default:
        printf("Sorry, no option match");
        break;
    }
    return 0;
}
