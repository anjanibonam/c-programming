#include <stdio.h>
main()
{
    int i, num, sum = 0;
    scanf ("%d", &num);
    for (i=1; i<=num; i++)
    {
    sum = sum + i;
    }
    printf ("Sum of first %d natural numbers = %d\n", num,sum);
}
