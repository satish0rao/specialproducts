#include <stdio.h>


int printArray(char *prefix, int * a, int n)
{
  printf ("%s",prefix);
  
  for (int i =0; i < n; i++)
    {
      printf (" %d ", a[i]);
    }
  printf("\n");
}
