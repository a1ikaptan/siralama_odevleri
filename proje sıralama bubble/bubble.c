#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 10

void  bubblesort(int array[], int size)
{
        int i,j,temp;

        for (int i=0; i<(size-1); i++)
{
        for (int j=0; j<size-i-1; j++)
{
        if (array[j]>array[j+1])
{
        temp = array[j]; 
        array[j] = array[j+1];
        array[j+1] = temp;
}
}
}
}

int main(){

        int i, j, array[MAX];
        int size=10;
        srand(time(NULL));
        for(int i=0; i<size; i++)
    {
        array[i] = rand()%1000+1;
    }
        printf("\t  Bubble Sort \n"); 

          printf("\n");


          printf("Bubble Sort\n");

          bubblesort(array,size);
          for(int i=0; i<size; i++)
    {
           printf("%d\t",array[i]);

    }

        getch();
    return 0;
}