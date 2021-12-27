#include <stdio.h>
main()
 {
    int num, last, first,a, swap, count = 0;
    scanf("%d", &num);
    a = num;
    last = a % 10;
    count = (int)log10(a);
    while(a>=10)
    {
    a/= 10;
    }
    first =a;
    swap = (last * pow(10, count) + first) + (num - (first * pow(10, count) + last));
    printf("Last Digit: %d\n", last);
    printf("First Digit: %d\n", first);
    printf("%d is swapped to %d\n", num, swap);
}
