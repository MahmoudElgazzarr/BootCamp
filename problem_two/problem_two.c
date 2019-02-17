/*********************************************************************************
 *
 *  problem_two.c
 *  Author: Ahmed Nofal, Avelabs Embedded software R&D crew
 *
 ********************************************************************************/


/****************************[Problem Description]*********************************
 *
 * Modify the Binary Search algorithm to find an element in a circularly sorted
 * array.
 * The array is sorted in an ascending order and rotated in clockwise
 *
 * Sample Input: arr = [8, 9, 10, 2, 5, 6]
 * 				 target = 10
 * Sample Output: The number is found at index 2
 *
 ********************************************************************************/
#include <stdio.h>
#include "problem_two.h"
#include "Bubble_Sort.h"
#include "problem_one.h"

/*********************************************************************************
 *
 * Function: circularArraySearch
 *
 * @param: arr[], Array that the function should find the number in.
 * @param: arr_size, Size of the array
 * @param: element_to_be_found, The elment to be searcher for
 * @return: int, the index of the element to be found
 *
 * Description: Function to find the number of times the array is rotated, if the
 * element was not found it should return -1
 *
 ********************************************************************************/
int circularArraySearch(int arr[], int arr_size, int element_to_be_found)
{
	/* Your code goes here */
	int number_of_rotation = findRotationCount(arr,arr_size);
	//printf("number of rotations is %d\n",number_of_rotation);
	int flag=0;
    if (element_to_be_found >arr[arr_size-1])
        {
            flag=1;
        }

	Bubble_sort_algo(arr,arr_size);
	int result = Binary_search_algo(arr,arr_size,element_to_be_found);
	if (flag==1){
        return abs(result-number_of_rotation);
        }
    else{
        return abs(result+(arr_size-number_of_rotation));
    }
}

/* circularArraySearch_test */
void circularArraySearch_test(void)
{
	int A[] = {9, 10, 2, 5, 6, 8};
	int target = 2;
	int n = sizeof(A)/sizeof(A[0]);
	int index = circularArraySearch(A, n, target);
	if(index != -1){
		printf("Element found at index %d", index);
	}
	else{
		printf("Element not found in the array");
	}

}
