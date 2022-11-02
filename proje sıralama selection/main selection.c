#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void  selectionsort(int array[], int size)
{
        int i,j;
        int min;

        for (int i=0; i<size; i++)
{
        min=i;
        for (int j=i; j<size; j++)
{
        if (array[j]<array[min])
{
        min=j;
}
}
        int temp = array[i]; 
        array[i] = array[min];
        array[min] = temp;
}
}

int main(){

        int i, j, array[MAX];
        int size=100;
        srand(time(NULL));
        for(int i=0; i<size; i++)
    {
        array[i] = rand()%10000+1;
    }
        printf("\t  Selection Sort \n"); 

          printf("\n");


          printf("Selection Sort\n");

          selectionsort(array,size);
          for(int i=0; i<size; i++)
    {
           printf("%d\t",array[i]);

    }

        getch();
    return 0;
}