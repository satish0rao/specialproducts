#include <stdlib.h>
#include <stdio.h>
#include "specialproducts.h"
#include "utils.h"

int main(int argc, char *argv[])
{
  int n = argc-1;
  int *result; 
  int *input;


  if (argc == 1)
    {
      
      int x[] = {2,4,3,5};

      n = 4;
      input = x;
    }
  else
    {
      input = (int *) malloc (sizeof(int)*n);
      for (int i=1;i< argc;i++)
	{
	  printf ("%s \n", argv[i]);
	  input[i-1] = atoi(argv[i]);
	}
    }

  result = getSpecialProducts(input,n);
  printArray("Input: ", input,n);

  printArray("Output: ", result,n);

	     
}
