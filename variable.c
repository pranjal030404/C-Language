#include <stdio.h>
#include <stdbool.h>
void main()
{
    int a; // declaration
    a = 5; // initialication
    printf("%d\n", a);

    float b = 2.5; // float point number which are decimal numbers it has 4 bytes
    printf("MRP is %f\n", b);

    double c = 3.12212421218918; // It is same as float the only difference is it has 8 bytes
    printf("Doubel float is %lf\n", c);

    char name[] = "Pranjal"; // array or a char
    printf("Hello %s\n ", name);

    bool d = false; // A boolean function only true and false
    printf("%d\n", d);
}