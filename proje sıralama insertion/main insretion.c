#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void  insertionsort(int array[], int size)
{
    int i,j;
    int element;

    for (int i=1; i<size; i++)
{
        int element = array[i];
        j = i-1;

        while (j >=0 && array[j] > element )
{
            array[j+1] = array[j];
            j = j-1;

}

    array[j+1] = element;
}

}

int main(){

        int i, j, array[MAX];
        int size=100;
        srand(time(NULL));
        for(int i=0; i<size; i++)
    {
        array[i] = rand()%1000+1;
    }
        printf("\t  Insertion Sort \n"); 

          printf("\n");


          printf("Insertion Sort\n");

          insertionsort(array,size);
          for(int i=0; i<size; i++)
    {
           printf("%d\t",array[i]);

    }

        getch();
    return 0;
}
