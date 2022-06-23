#include <stdio.h>
int collatzConjecture(int n);

//this is a part of practice for undrestanding recursion.
//collatzConjecture applies to all positive numbers.
//this program indicates how many steps it takse for a number to get to 1 using collatzconjecture.
// if n is 1,stop.

// (recursive cases)
// if n is even repeat n/2.
// if n is odd repeat 3n + 1


int main(void)
{
    printf("%i\n", collatzConjecture(200));
}

int collatzConjecture(int n)
{
    if (n == 1)
        return 0;
    else if (n % 2 == 0)
        return 1 + collatzConjecture(n / 2);
    else
        return 1 + collatzConjecture(3 * n + 1);
}