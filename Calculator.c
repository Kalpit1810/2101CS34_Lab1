#include <stdio.h>

int main()
{
    // creating user interface and taking inputs.
    float num1, num2;
    int op;

    printf("Enter the number corresponind to the operation you want to perform:\n 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n  ");
    scanf("%d", &op);
    printf("Enter the Numbers:\n Num1: ");
    scanf("%f", &num1);
    printf("\n Num2: ");
    scanf("%f", &num2);

    return 0;
}

