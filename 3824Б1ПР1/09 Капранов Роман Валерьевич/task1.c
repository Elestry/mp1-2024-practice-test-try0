// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN

#include <stdlib.h>
#include <stdio.h>
#include<limits.h>
int sum_of_two_numbers(int a, int b)
{
    long long  c;
    c = long long(a) + long long( b);
    if ((c >= INT_MAX) || (c <= INT_MIN))
    {
        if (c >= INT_MAX) { return INT_MAX; }
        else
        {
            return INT_MIN;
        }
        
    }
    else { return c; }
    
}
