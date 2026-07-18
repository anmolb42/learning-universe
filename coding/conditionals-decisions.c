// Conditionals — decisions
// Write `int classify(int n)` that returns -1 if n is negative, 0 if n is zero, and 1 if n is positive.
// Solved 2026-07-18 — all tests passing

#include <stdio.h>
#include <math.h>

int classify(int n)
{
   if(n<0){
       return -1;
}
   else if (n==0){
    return 0;
}
  else{
  return 1;
}
}
