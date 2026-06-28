# exercise

## 1

(a)

```c
i = 5; j = 3;
printf("%d %d", i / j, i % j);
```

output: 1 2

(b)

```c
i = 2; j = 3;
printf("%d", (i + 10) % j);
```

output: 0

(c)

```c
i = 7; j = 8; k = 9;
printf("%d", (i + 10) % k / j);
```

output: 1

(d)

```c
i = 1; j = 2; k = 3;
printf("%d", (i + 5) % (j + 2) / k);
```

output: 0

## 2

In C89, No, not necessarily. In C89, if either operand in a division is negative, the result may be rounded up or down depending on the implementation.In C99, Yes, always. The C99 standard guarantees that integer division always truncates toward zero. Thus, both expressions will evaluate to the exact same value.

## 3

for C89

(a) 8 / 5 = 1

(b) -8 / 5 = -1, -2

(c) 8 / -5 = -1, -2

(d) -8 / -5 = 1, 2

## 4

for C99

(a) 8 / 5 = 1

(b) -8 / 5 = -1

(c) 8 / -5 = -1

(d) -8 / -5 = 1

## 5

for C89

(a) 8 % 5 = 3

(b) -8 % 5 = -3, 2

(c) 8 % -5 = 3, -2

(d) -8 % -5 = -3, 2

## 6

for C99

(a) 8 % 5 = 3

(b) -8 % 5 = -3

(c) 8 % -5 = 3

(d) -8 % -5 = -3

## 7

the alternative technique fails whenever the total is an exact multiple of 10.If total is 20, 20 % 10 is 0. The alternative algorithm calculates 10 - 0 = 10, producing a two-digit check digit (10) instead of a single digit (0).The original algorithm calculates (20 - 1) % 10 -> 19 % 10 -> 9. Then 9 - 9 = 0, which correctly produces the single digit 0

## 8

the program will work finely. in all kind of numbers like multiple or non multiple of 10.

## 9

(a)

```c
i = 7; j = 8;
i *= j + 1;
printf("%d %d", i, j);
```

output: 63 8

(b)

```c
i = j = k = 1;
i += j += k;
printf("%d %d %d", i, j, k);
```

output: 3 2 1

(c)

```c
i = 1; j = 2; k = 3;
i -= j - k;
printf("%d %d %d", i, j, k);
```

output: 2 2 3

(d)

```c
i = 2; j = 1; k = 0;
i *= j *= k;
printf("%d %d %d", i, j, k);
```

output: 0 0 0

## 10

(a)

```c
i = 6;
j = i += i;
printf("%d %d", i, j);
```

output: 12 12

(b)

```c
i = 5;
j = (i -= 2) + 1;
printf("%d %d", i, j);
```

output: 3 4

(c)

```c
i = 7;
j = 6 + (i = 2.5);
printf("%d %d", i, j);
```

output: 2 8

(d)

```c
i = 2; j = 8;
j = (i = 6) + (j = 3);
printf("%d %d", i, j);
```

output: 6 9

## 11

(a)

```c
i = 1;
printf("%d ", i++ - 1);
printf("%d", i);
```

output: 0 2

(b)

```c
i = 10; j = 5;
printf("%d ", i++ - ++j);
printf("%d %d", i, j);
```

output: 4 11 6

(c)

```c
i = 7; j = 8;
printf("%d ", i++ - --j);
printf("%d %d", i, j);
```

output: 0 8 7

(d)

```c
i = 3; j = 4; k = 5;
printf("%d ", i++ - j++ + --k);
printf("%d %d %d", i, j, k);
```

output: 4 4 5 4

## 12

(a)

```c
i = 5;
j = ++i * 3 - 2;
printf("%d %d", i, j);
```

output: 6 16

(b)

```c
i = 5;
j = 3 - 2 * i++;
printf("%d %d", i, j);
```

output: 6 -7

(c)

```c
i = 7;
j = 3 * i-- + 2;
printf("%d %d", i, j);
```

output: 6 23

(d)

```c
i = 7;
j = 3 + --i * 2;
printf("%d %d", i, j);
```

output: 6 15

## 13

Both ++i and (i += 1) perform the side effect of adding 1 to i and return the new, updated value as the result of the expression. The postfix expression i++ returns the old value before incrementing.

## 14

```c
(a) ((a * b) - (c * d) + e)

(b) (((a / b) % c) / d)

(c) ((((- a) - b) + c) - (+ d))

(d) (((a * (- b)) / c) - d)
```

## 15

i = 1, j = 2,

(a) i += j;

i = 3 j =2

(b) i--;

i = 0, j = 2

(c) i * j / i;

i = 1 j = 2

(d) i = ++j;

i = 3 j = 3

## 1P

```c
#include <stdio.h>

int main() {
    int i, a, b;

    printf("Enter a two-digit number: ");
    scanf("%d\n", &i);

    a = i % 10;
    b = i / 10;

    printf("The reversal is: %d%d\n", a % 10, b / 10);

    return 0;
}
```

## 2P

```c
#include <stdio.h>

int main(void) {
    int number, d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    d3 = number % 10;
    d2 = (number / 10) % 10;
    d1 = number / 100;

    printf("The reversal is: %d%d%d\n", d3, d2, d1);

    return 0;
}
```

## 3P

```c
#include <stdio.h>

int main(void) {
    int d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("The reversal is: %d%d%d\n", d3, d2, d1);

    return 0;
}
```

## 4P

```c

```

## 5P

```c
#include <stdio.h>

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
}
```

## 6P

```c
#include <stdio.h>

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
}
```
