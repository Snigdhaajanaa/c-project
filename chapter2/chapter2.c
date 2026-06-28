#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    
    return 0;
}


/*#include <stdio.h>

int main() {
    printf("Brevity is the soul of wit.\n   --Shakespeare\n");
    
    return 0;
}*/

/*#include <stdio.h>

int main() {

    int height, length, width, volume, weight;

    height = 4;
    length = 5;
    width = 7;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimension: %dx%dx%d\n", length, width, height);
    printf("vloume (cubic centimeters): %d\n", volume);
    printf("Dimensional weight (grams): %d\n", weight);

    return 0;
}*/

/*#include <stdio.h>

int main() {

    int height, length,  width, volume;
    height = 10;
    length = 10;
    width = 10;

    volume = height * length * width;
    printf("volume: %d\n", volume);

    //  or   printf("volume: %d\n", height * length * width);

    return 0;

}*/

/*#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}*/

/*#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}*/