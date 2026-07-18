// Loops — repetition
// Write `int sum_to(int n)` returning the sum of integers 1 through n. sum_to(5) → 15.
// Solved 2026-07-18 — all tests passing

#include <stdio.h>
#include <math.h>

int sum_to(int n)
{
int total=0;
  for(int i=1;i<=n;i++){
      total+=i;
}
return total;
}
