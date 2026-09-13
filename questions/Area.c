#include <stdio.h>
#include <math.h>

int main() {

    double radius = 0.0;
    double area = 0.0;
    double surface = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);
    

    area = PI * pow(radius, 2);
    surface = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area = %.2lf\n", area);
    printf("Surface Area: %lf\n", surface);
    printf("Volume : %lf\n", volume);

    return 0;
}




// for Radius * radius or when we want to power up or multiply anything we can use the math.h file and use pow(radius, 2) just like that ;

// area = PI * r-> radius square I mean PI * radius * radius;

// Sphere/ surface = 4 * PI * pow(radius, 2);
// Volume = (4.0 / 3.0) * PI * pow(radius, 3);

