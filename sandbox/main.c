#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main() {

    float x = 3;

    //x = sqrt (x);
    //x = pow(x, 4) ;
    //x = round (x) ;
    //x = ceil(x);
    //x = floor(x);
    // x = abs(x);
    // x = log(x);
    x = sin(x);

    // printf ("%f\n", x);

    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159;
    double surfaceArea = 0.0;
    double volume = 0.0;

    printf("Enter the radius: ");
    scanf ("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = 4/3 * PI * pow(radius, 3);

    printf("The area of the circle is %lf\n", area);
    printf("The surface area of the sphere is %lf\n", surfaceArea);
    printf("The volume of the sphere is %lf\n", volume);

    return 0;
}