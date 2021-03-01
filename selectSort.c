#include <stdio.h>  
#include <stdlib.h>  

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void selectSort(int *arr, int size)
{
    int minIndex = 0;
     for (int i = 0; i < size; i++)
    {
        minIndex = i;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
        swap(&arr[minIndex], &arr[i]);    
    }
}

int main()
{ 
    int array[] = {7,3,1,-5,4,0,15};
    long int arraySize = sizeof(array)/sizeof(array[0]);


    selectSort(array,arraySize);
    printArray(array,arraySize);
    return 0;
}