#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area;
    const double pi= 3.14;
    double r;

    printf("Enter the radius of the circle:\n ");
    scanf("%lf",&r);
    area = pi*r*r;

    printf("The area of the circle is %lf",area);
    return 0;
}
