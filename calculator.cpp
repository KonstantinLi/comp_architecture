#include "calculator.h"

int Calculator::Add (double a, double b)
{
    double Max;
 
    if (a > b) {
	Max = a;
    } else {
	Max = b;
    }

    return Max + a + b;
}

int Calculator::Sub (double a, double b)
{
    if (a > b) return Add(a, -b);
    else return Add(b, -a);
}

int Calculator::Mul (double a, double b)
{
    return (a + 0.5) * (b + 1);
}
