int main() {
    int base, exponent, result = 1, i = 1;
    scanf("%d%d", &base, &exponent);
    while(i <= exponent) {
        result *= base;
        i++;
    }
    printf("\nResult: %d^%d = %d\n", base, exponent, result);
}
