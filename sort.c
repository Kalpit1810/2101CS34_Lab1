#include <stdio.h>

void ins();


int main(){
    // creating user interface and taking user input
    int op;

    printf("Enter the number corresponind to the sort operation you want to perform:\n 1. insertion sort\n 2. Selection sort\n 3. Bubble sort\n 4. Merge sort\n 5. Quick sort ");
    scanf("%d", &op);

     switch(op){
        case 1: ins();
     };

    return 0;
}

void ins()
{
    int n, i, j, temp;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) 
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\n", arr[i]);
    }
}