#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *allocating memory using malloc
 *return a  pointer to allocated memory
 *if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
**/

int main(void)
{
        int *p, n, i;
        printf("Enter the number of integers to be entered : ");
        scanf("%d", &n);
        p = (int *)malloc(n * sizeof(int));
        if(p==NULL)
        {
                printf("Memory not available\n");
                exit(1);
        }
        for(i=0; i<n; i++)
        {
                printf("Enter an integer : ");
                scanf("%d", p+i);
        }
        for(i=0; i<n; i++)
                printf("%d\t", *(p+i));

                return 0;

}
