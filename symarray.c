// ============================================================================
// file: symarray.c
// ============================================================================
// Programmer: Roger Chicas-Terrill
// Date: 10/04/2016
// Class: CSCI 223 ("C Language for Mathematics and Science")
// Time: TR 04:30am
// Instructor: Mr. Edwards
// Project: Random_Guess
//
// Description:
//      This program checks an array for symmetry and returns 1 if symmetrical and 
//		0 if it is not symmetrical. 
// ============================================================================
#include <stdio.h>
#define SIZE 6

//Function prototype
int SymArray(int *array, int numElem);

// ==== main ==================================================================
//
// ============================================================================
int main(void)
{
	auto int myArray[SIZE] = {5, 4, 3, 3, 4, 5};
	printf("%d\n", SymArray(myArray, SIZE));
	
	return 0;
}

 // end of "main"
 
 
// ==== SysmArray ===============================================================
//
// This function confirms if an array is symetrical.
//
// Input:
//      array[], numElems: Respectively the name of the array, the number of
//		elements in array.
// Output:
//      Returns 1 for symmetry and 0 for non symmetry in array.
//
// ============================================================================

int SymArray(int *array, int numElem)
{
	auto int *arrEnd = array + numElem;
	auto int *pFront;
	auto int *pBack;
	
	for(pFront = array, pBack = array + numElem -1; pFront < arrEnd; pFront++, pBack--)
	{
		printf("%d %d\n", *pFront, *pBack);
		if(*pFront != *pBack)
		{
			printf("Failed\n");
			return 0;
		}
		
		//printf("%d",*pWalk);
	}
	printf("Win\n");
	return 1;
}

// end of "FillRandArray"