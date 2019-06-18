#include <malloc.h>
#include <ctype.h>

#include "specialproducts.h"
#include "utils.h"

int * getSpecialProducts(int a[], int n)
// Input: a vector of integers.
// Output: a vector array s where each
// entry contains the product of all numbers other than the number at
// that index.
{
  int *forward = (int *) malloc (sizeof(int)*n);
  int *backward = (int *) malloc (sizeof(int)*n);
  // int n = sizeof(a)/sizeof(a[0])



  forward[0] = 1;  // Will contain product of integers in prefix.
  backward[n-1] = 1;  // Will contain product of integers in suffix.
    
  for (int i=1; i< n; i++)
    {
      int backward_index = n-1 - i;
      backward[backward_index] = backward[backward_index + 1]*a[backward_index+1];
      forward[i] = forward[i-1] *a[i-1];
    }
  /*
  printArray("Input ", a, n);
  printArray("Forward ", forward, n);
  printArray("Backward ", backward, n);
  */
  
  int *result = forward;  // Just renaming to be clear this is result.
  for (int i=0;i<n; i++)
    {
      result[i] = forward[i]* backward[i];
    }
  // printArray("Result ", backward, n);
  return result;

}
