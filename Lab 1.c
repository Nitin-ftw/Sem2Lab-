#include <stdio.h>
#include <math.h>

#define PI 3.14159

float diameter(float , float , float , float );
float area(float );
float perimeter(float );

int main()
{
    float x1, y1, x2, y2, d, r, a, p;

    printf("Enter x1 and y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x2 and y2: ");
    scanf("%f %f", &x2, &y2);

    d = diameter(x1, y1, x2, y2);

    r = (float)d / 2;

    a = area(r);
    p = perimeter(r);

    printf("\nDiameter = %.2f", d);
    printf("\nArea = %.2f", a);
    printf("\nPerimeter = %.2f", p);

    return 0;
}

float diameter(float x1, float y1, float x2, float y2)
{
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

float area(float r)
{
    return PI * r * r;
}

float perimeter(float r)
{
    return 2 * PI * r;
}
