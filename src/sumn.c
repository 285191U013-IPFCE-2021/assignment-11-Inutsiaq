#include "sumn.h"

#include<stdio.h>

int sumn(int n) // this function computes n to the power of 2.
{
  if (n == 1)
    return 1; // we know that (2*1-1) = 1, so this is the base case
  else
    return (2*n-1)+sumn(n-1); 
}