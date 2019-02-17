#include <stdio.h>
#include <stdlib.h>
#include "Bubble_Sort.h"
#include "Binary_Search.h"

int main()
{
    int arr[] = {0,1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    /*
    Bubble_sort_algo(arr,size);
    printf("%d\n",arr[0]);

    int result = Linear_search_algo(arr,size,target);
    printf("%d",result);
    */
    int result = Binary_search_algo(arr,size,target);
    printf("%d",result);
    return 0;
}
