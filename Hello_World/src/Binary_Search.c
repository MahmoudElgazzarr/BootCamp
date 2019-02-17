/*********************************************************************************
 *
 *  Binary_Search.c
 *  Author: Ahmed Nofal, Avelabs Embedded software R&D crew
 *
 ********************************************************************************/



/****************************[Problem Description]*********************************
 *
 * Binary search is one of the best searching algorithms. Binary search algorithm
 * works as follows:
 * Assume having a sorted array arr = [1, 2, 3, 4, 5, 6, 7] and you want to search
 * for the number "2" the algorithm starts by comparing your target number "2" to
 * the middle number in the array which is "4" if this is the desired number then
 * return the index of it, if not, is 2 greater than 4 ? no then is it less than 4?
 * Yes, then start looking in the sub array starting from the first element in the
 * array to the elment right before the middle element "4", i.e (1..arr[mid-1]).
 * Get the middle element in this sub-array and compare it to 2, is 2 equal to 2?
 * Yes then return the index of it.
 * As we can see Binary search found this number in 2 iterations only.
 *
 *Notice:: if you try searching for the element "6" you will reach it in only two
 *		   iterations
 ********************************************************************************/
#include <stdio.h>
#include "Binary_Search.h"
#include "Bubble_Sort.h"

#define ARR_SIZE 12

int Linear_search_algo(int arr[], int arr_size, int target){
	/* Your code goes here */
    int i;
	for(i=0;i<arr_size-1;i++)
    {
        if (arr[i] == target )
        {
            return i;
        }
    }
    return -1;
}

int Binary_search_algo(int arr[], int arr_size, int target){
	/* Your code goes here */
	unsigned int upper,lower,mid,i;
	upper = arr_size-1;
    lower = 0;
    int max_trial = ((arr_size/2)+1);
	mid = ( upper + lower ) / 2;

	for(i=0;i<=(max_trial);i++)
    {
        if (arr[mid] == target)
        {
            //printf("error 3");
            return mid;
        }
        else if ((arr[mid]) > target)
        {
            //printf("error2");
            upper = (mid-1);
            mid = (lower + upper)/2;

        }
        else if ((arr[mid]) < target)
        {
            //printf("error1");
            lower = (mid + 1);
            mid = (lower + upper )/2;
        }
    }
    return -1;
}


void Binary_search_algo_test(void){
    int index;
	int arr[ARR_SIZE] = {1, 55, 10, 23, 6, 12, 44, 2, 0, 15, 43, 7};
	Linear_search_algo(arr, ARR_SIZE, 18);
	if(index == -1 ){
		printf("Target not found in the array\n");
	}
	else{
		printf("Target is found in the array at index %d\n", index);
	}

	Bubble_sort_algo(arr,ARR_SIZE);
    index = Binary_search_algo(arr,ARR_SIZE, 18);
	if(index == -1 ){
		printf("Target not found in the array\n");
	}
	else{
		printf("Target is found in the array at index %d\n", index);
	}
}
