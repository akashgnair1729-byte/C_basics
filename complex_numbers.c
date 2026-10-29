#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

// Add two complex numbers.
struct Complex addComplex(struct Complex a, struct Complex b)
{
    struct Complex result;

    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;

    return result;
}

// Display the complex number.
void displayComplex(struct Complex c)
{
    if (c.imag < 0)
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    else
        printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main(void)
{
    struct Complex c1, c2, sum;

    printf("Enter real and imaginary parts of first number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary parts of second number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = addComplex(c1, c2);

    printf("First complex number: ");
    displayComplex(c1);

    printf("Second complex number: ");
    displayComplex(c2);

    printf("Sum: ");
    displayComplex(sum);

    return 0;
}