#include <stdio.h>

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

// Select the operation based on the operator.
double calculate(double a, double b, char op)
{
    switch (op)
    {
        case '+': return add(a, b);
        case '-': return subtract(a, b);
        case '*': return multiply(a, b);
        case '/': return divide(a, b);
        default:  return 0;
    }
}

int main(void)
{
    double a, b, answer;
    char op;

    printf("Enter expression (example: 10 + 5): ");
    scanf("%lf %c %lf", &a, &op, &b);

    if (op != '+' && op != '-' && op != '*' && op != '/')
    {
        printf("Invalid operator.\n");
        return 1;
    }

    if (op == '/' && b == 0)
    {
        printf("Error: Division by zero.\n");
        return 1;
    }

    answer = calculate(a, b, op);
    printf("Result = %.2f\n", answer);

    return 0;
}