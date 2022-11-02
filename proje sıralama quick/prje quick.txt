#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void quicksort(int array[], int left, int right)
{
    int i,j,pivot,temp;
    i=left;
    j=right;
    pivot=array[(i+j)/2];

    do
{
        while(array[i]< pivot)
        i++;
        while(array[j]>pivot)
        j--;
        if(i<=j)
{
        temp= array[i];
        array[i]=array[j];
        array[j]=temp;
        i++;
        j--;
}

}       while(i<j);
        if (i<right)
        quicksort(array, i, right);
        if(left<j)
        quicksort(array, left, j);


}


int main(){

        int i, j, array[MAX];
        int size=100;
        srand(time(NULL));
        for(int i=0; i<size; i++)
    {
        array[i] = rand()%1000+1;
    }
        printf("\t  Quick Sort \n"); 

          printf("\n");


          printf("Quick Sort\n");

         quicksort(array, 0, MAX-1);
    for(int i=0; i<size; i++)
    {
        printf("%d\t",array[i]);

    }

        getch();
    return 0;
}