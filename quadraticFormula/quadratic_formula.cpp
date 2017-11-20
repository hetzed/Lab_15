/*
Author: Felipe D Quinones | 106148

Hacer un programa que calcule las raices de un polinomio de grado 2 en la forma ax^2 + bx + c utilizando la formula cuadratica (ver referencia).

Los raices deben ser positivas, de ser el discriminante negativo dar un mensaje de error.
Deben tener los siguientes prototipos:

void quadraticFormula(float a, float b, float c, float * x1, float * x2);
float discriminant(float a, float b, float c);

Referencia:
The quadratic polynomial ax^2 + bx + c has discriminant
b^2 -4ac
The square root of the discriminant appears in the quadratic formula for the roots of the quadratic polynomial:
x1,2 = (-b +- sqrt(b^2 -4ac) / 2a)
The discriminant is zero if and only if the two roots are equal. If a, b, c are real numbers, the polynomial has two distinct real roots if the discriminant is positive, and two complex conjugate roots if it is negative. [5]
If a, b, c are rational numbers, then the discriminant is the square of a rational number, if and only if the two roots are rational numbers.

History:
11 / 18 / 2017 - File created.[FQS]
*/