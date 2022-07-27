#include <stdio.h>

float add(float x,float y);
float subs(float x,float y);
float multiply(float x,float y);

int main()
{
    // creating user interface and taking inputs.
    float num1, num2;
    int op;

    printf("Enter the number corresponind to the operation you want to perform:\n 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n  ");
    scanf("%d", &op);
    printf("Enter the Numbers:\n Num1: ");
    scanf("%f", &num1);
    printf(" Num2: ");
    scanf("%f", &num2);

    switch(op){
        case 1: printf("The result is: %f", add(num1,num2));
        case 2: printf("The result is: %f", subs(num1,num2));
        case 3: printf("The result is: %f", multiply(num1,num2));
    };

    return 0;
}


float add(float x,float y){
    return x+y;
}


float subs(float x,float y){
    return x-y;
}

float multiply(float x,float y){
    return x*y;
}
