#include <stdio.h>
#include <stdlib.h>


int main()
{
    	/* Your code goes here*/
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
	unsigned char i,j;
	int temp;
	//arr_size = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<(4);i++)
    {
        for(j=0;j<(4);j++)
        {
            if((arr[j])>(arr[j+1]))
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    printf("%d\n",arr[0]);
    return 0;
}
