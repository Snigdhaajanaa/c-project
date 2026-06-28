#include <stdio.h>

int main() {
    int i, a, b;

    printf("Enter a two-digit number: ");
    scanf("%d", &i);

    a = (i % 10);
    b = (i / 10);

    printf("The reversal is: %d%d\n", a, b);

    return 0;
}

/*#include <stdio.h>

int main(void) {
    int number, d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    d3 = number % 10;
    d2 = (number / 10) % 10;
    d1 = number / 100;

    printf("The reversal is: %d%d%d\n", d3, d2, d1);

    return 0;
}*/

/*#include <stdio.h>

int main(void) {
    int d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("The reversal is: %d%d%d\n", d3, d2, d1);

    return 0;
}*/

/*#include <stdio.h>

int main(void) {
    int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, first_sum, second_sum, t;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
          &d, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10);

    first_sum = d + i2 + i4 + i6 + i8 + i10;
    second_sum = i1 + i3 + i5 + i7 + i9;
    t = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((t - 1) % 10));

    return 0;
}*/

/*#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, sum1, sum2, t;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    sum1 = n2 + n4 + n6 + n8 + n10 + n12;
    sum2 = n1 + n3 + n5 + n7 + n9 + n11;
    
    t = (3 * sum1) + sum2;

    printf("Check digit: %d\n", 9 - ((t - 1) % 10));

    return 0;
}*/