#include <stdio.h>

int main() {
    int num, index = 0;
    printf("Enter a positive number: ");
    scanf(" %d", &num);

    do
    {
        printf("%d\n", index++);
    } while (num>index);
    
    return 0;
}
