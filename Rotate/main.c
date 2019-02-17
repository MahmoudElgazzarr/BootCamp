#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
int findRotationCount(int arr[], int arr_size)
{
	/* Your code goes here  */
	unsigned int i;
    int min=arr[0];
    int index=0;
	for (i=0;i<arr_size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            index = i;
        }
    }
    return (arr_size - index);
}

void findRotationCount_Test(void)
{
	int arr[] = { 8, 9, 10, 2, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int count = findRotationCount(arr, n);
	printf("The array is rotated %d times\n", count);
}

