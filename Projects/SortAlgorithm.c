#include <stdio.h>

int main()
{
    int array[100];
    int n, i, j, tmp, k;
	
    printf("Input the size of array : ");
    scanf("%d", &n);

       for(i=0;i<n;i++) 
	   {
	      printf("Enter[%d] : ",i);
	      scanf("%d",&array[i]);
	    }
	    
    for(i=0; i<n; i++)
	{
        for(j=i+1; j<n; j++)
		{
            if(array[j] <array[i])
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
	printf("\nEnter k number of elements to print: ") ;
	scanf("%d",&k);
	    for(i=0; i<k; i++)
		{
        printf("%d  ", array[i]);
    }
    return 0;
}
