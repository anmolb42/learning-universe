// BUG-201 · Cart total is wrong
// Checkout totals are too low. A cart with prices {10, 20, 30} totals 30 instead of 60. Happens on every cart with 2+ item
// Solved 2026-07-18 — all tests passing

#include <stdio.h>
int cart_total(int prices[], int n)
{
    int total = 0;
    for (int i = 0; i <n; i++)
    {
        total += prices[i];
    }
    return total;
}
