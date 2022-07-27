#include <stdio.h>

void ins();
void sel();
void bub();
void mer();
void qui();

int main(){
    // creating user interface and taking user input
    int op;

    printf("Enter the number corresponind to the sort operation you want to perform:\n 1. insertion sort\n 2. Selection sort\n 3. Bubble sort\n 4. Merge sort\n 5. Quick sort \n");
    scanf("%d", &op);

     switch(op){
        case 1: ins();
        case 2: sel();
        case 3: bub();
        case 4: mer();
        case 5: qui();

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

void sel()
{
int n, i, j, position, swap;
printf("Enter number of elements:\n");
scanf("%d", &n);
int a[100];

printf("Enter %d Numbers\n", n);

for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

for(i = 0; i < n - 1; i++)
{
    position=i;
        for(j = i + 1; j < n; j++)
        {
            if(a[position] > a[j])
                position=j;
        }
    if(position != i)
    {
        swap=a[i];
        a[i]=a[position];
        a[position]=swap;
    }
}

printf("Sorted Array:n");
for(i = 0; i < n; i++)
printf("%d\n", a[i]);
}

void bub()
{
  int array[100], n, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);
}

// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {

  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

// Driver program
void mer() 
{
  int n,i;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);
}

