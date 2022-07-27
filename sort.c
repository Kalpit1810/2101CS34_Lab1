#include <stdio.h>

int main(){
    // creating user interface and taking user input
    int op;

    printf("Enter the number corresponind to the sort operation you want to perform:\n 1. insertion sort\n 2. Selection sort\n 3. Bubble sort\n 4. Merge sort\n 5. Quick sort ");
    scanf("%d", &op);

    return 0;
}