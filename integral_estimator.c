#include <stdio.h>

float math_function(float x)
{
    // TODO: compute function and return y value
    return 0;
}

int main()
{
    int boundA, boundB;
    float dt;

    printf("Enter your bounds (a, b): ");
    scanf("%d, %d", &boundA, &boundB);
    printf("Enter your dt: ");
    scanf("%f", &dt);

    float integral = 0;
    // TODO: actually calcuate the integrate

    printf("Integral between %d and %d with dt of %f is: %f\n", boundA, boundB, dt, integral);
    return 0;
}
