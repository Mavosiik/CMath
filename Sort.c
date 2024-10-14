#include<stdio.h>
#include<stdlib.h>

double getmax(double input[],int size)
{
    double max = input[0];

    for (int idx = 0; idx < size-1; idx++)
    {
        if (input[idx] > max)
        {
            max = input[idx];
        }
        
    }
    
    return max;
}

void insert(char *input[],double unsorted[], int size)
{
    for (int idx = 1; idx < size;idx++)
    {
        unsorted[idx-1] = atof(input[idx]);
        //printf("%.2f ",atof(input[idx]));
    }
    
}

void sort(double unsorted[], double sorted[], int size, double max)
{
    int saveidx;
    double fmin;
    
    for (int idx = 0; idx < size-1; idx++)
    {
        fmin = max;

        for (int idxs = 0; idxs < size-1; idxs++)
        {
            if (unsorted[idxs] <= fmin && unsorted[idxs] != -42.042)
            {
                fmin = unsorted[idxs];
                saveidx = idxs;
            }
        }
        
        unsorted[saveidx] = -42.042;
        sorted[idx] = fmin;
    }
    
}

int main(int argc, char *argv[])
{
    double unsorted[argc-1];
    double sorted[argc-1];

    insert(argv,unsorted,argc);

    //printf("%.2f\n",getmax(unsorted,argc));
    
    sort(unsorted, sorted, argc, getmax(unsorted,argc));

    for (int idx = 0; idx < argc-1; idx++)
    {
        printf("%.2f ",sorted[idx]);
    }

    printf("\n");
    
    return 0;
}