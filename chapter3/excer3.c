/*#include <stdio.h>

int main() {
    int m, d, y;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    // %.2d ensures numbers under 10 get a leading zero
    printf("You entered the date %d%.2d%.2d\n", y, m, d);

    return 0;
}*/

/*#include <stdio.h>

int main(){
    int item_num, m, d, y;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
}*/

/*#include <stdio.h>

int main() {
    int gsi, group, publisher, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group, &publisher, &item, &check);

    printf("GS1 prefix: %d\n", gsi);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item);
    printf("Check digit: %d\n", check);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int s, g, a;

    printf("Enter a date [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &s, &g, &a);

    // %.2d ensures numbers under 10 get a leading zero
    printf("You entered %03d.%03d.%04d\n", s, g, a);

    return 0;
}

/*#include <stdio.h>

int main() {
    
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
          &n1, &n2, &n3, &n4, 
          &n5, &n6, &n7, &n8, 
          &n9, &n10, &n11, &n12, 
          &n13, &n14, &n15, &n16);

    printf("\n");
    printf("%d\t%d\t%d\t%d\n", n1, n2, n3, n4);
    printf("%d\t%d\t%d\t%d\n", n5, n6, n7, n8);
    printf("%d\t%d\t%d\t%d\n", n9, n10, n11, n12);
    printf("%d\t%d\t%d\t%d\n", n13, n14, n15, n16);
    printf("\n");

    // 3. Calculate and display row sums
    printf("Row sums: %d %d %d %d\n", (n1 + n2 + n3 + n4), (n5 + n6 + n7 + n8), (n9 + n10 + n11 + n12), (n13 + n14 + n15 + n16));

    // 4. Calculate and display column sums
    printf("Column sums: %d %d %d %d\n", (n1 + n5 + n9 + n13), (n2 + n6 + n10 + n14), (n3 + n7 + n11 + n15), (n4 + n8 + n12 + n16));

    // 5. Calculate and display diagonal sums
    // Top-left to bottom-right: n1, n6, n11, n16
    // Top-right to bottom-left: n4, n7, n10, n13
    printf("Diagonal sums: %d %d\n", (n1 + n6 + n11 + n16), (n4 + n7 + n10 + n13));

    return 0;
}*/

/*#include <stdio.h>

int main(){
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}*/