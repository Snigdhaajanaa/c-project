/*#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}*/

/*#include <stdio.h>
int main(void)
{
    printf("parkinson's law:\nwork expands to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}*/

/*#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10;
    int volume;

    volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}*/

/*#include <stdio.h>

int main(void)
{
    // Declaring variables WITHOUT giving them values (uninitialized)
    int int1, int2, int3;
    float float1, float2, float3;

    // Printing whatever happens to be inside them
    printf("Integers:\n");
    printf("int1 = %d\n", int1);
    printf("int2 = %d\n", int2);
    printf("int3 = %d\n", int3);

    printf("\nFloats:\n");
    printf("float1 = %f\n", float1);
    printf("float2 = %f\n", float2);
    printf("float3 = %f\n", float3);

    return 0;
}*/


/*#include <stdio.h>

int main(void)
{

   printf("       *\n");
   printf("      *\n");
   printf("     *\n");
   printf("*   *\n");
   printf(" * *\n");
   printf("  *\n");

   return 0;
}*/


/*#include <stdio.h>

int main(void)
{
  int r;
  float v;
  
  r = 10;
  
  v = (4.0f/3.0f) * 3.14159f * r * r * r;
  printf("Volume of the sphere : %f\n", v);


   return 0;
}*/

/*#include <stdio.h>

int main(void)
{
  float amount, tax;

  printf("Enter an amount: ");
  scanf("%f", &amount);
  
  tax = amount + amount * ( 5.0/ 100.0);
  printf("With added tax : %f\n", tax);


   return 0;
}*/

/*#include <stdio.h>

int main(void)
{
  int r;
  float v;
  
  printf("Enter the radius of the shepre: ");
  scanf("%d", &r);
  
  v = (4.0f/3.0f) * 3.14159f * r * r * r;
  printf("Volume of the sphere : %f\n", v);


   return 0;
}8/

/*#include <stdio.h>

int main(void)
{
  int x,y;
  
  printf("Enter the value of x: ");
  scanf("%d", &x);

  y = 3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+7*(x)-6;
  printf("Value of the polynomial is : %d\n", y);

  return 0;
}*/

/*#include <stdio.h>

int main(void)
{
  int x,y;
  
  printf("Enter the value of x: ");
  scanf("%d", &x);

  y = ((((3*x+2)*x-5)-x-1)+7)*x-6;
  printf("Value of the polynomial is : %d\n", y);


   return 0;
}*/


/*#include <stdio.h>

int main(void)
{
  int da, twen, ten, five, one;
  
  printf("Enter the dollar amount: ");
  scanf("%d", &da);

  twen = da / 20;
  ten = (da % 20) / 10;
  five = (da %10) / 5;
  one = (da % 5) / 1;

  printf("$20 bills : %d\n", twen);
  printf("$10 bills : %d\n", ten);
  printf("$5 bills : %d\n", five); 
  printf("$1 bill : %d\n", one);

   return 0;
}*/

/*#include <stdio.h>

int main(void)
{
  float loan, interest_rate, payment, monthly_rate, first, second, third;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter amount of interest_rate: ");
  scanf("%f", &interest_rate);
  printf("Enter amount of payment: ");
  scanf("%f", &payment);

  monthly_rate = interest_rate / 100.0 / 12.0;
  first = loan - payment + (loan * monthly_rate);
  second = first - payment + (first * monthly_rate);
  third = second - payment + (second * monthly_rate);

  printf("Balance remaining after first payment: %f\n", first);
  printf("Balance remaining after second payment : %f\n", second);
  printf("Balance remaining after third payment: %f\n", third); 
  

   return 0;
}
*/