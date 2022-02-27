//Runge Kutta 4 method to find out the numerical solution of a first order differential equation.
#include <stdio.h>
#define f(x, y) (y*y - x*x)/(y*y + x*x)              //define any functions  you like

int main()
{
    int i, n;
    float x0, y0, xn, x, y, h, k1, k2, k3, k4, k;
    printf("Enter initial conditions: \n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("y0 = ");
    scanf("%f", &y0);
    printf("Calculation point(xn) = ");
    scanf("%f", &xn);
    printf("Number of steps = ");
    scanf("%d", &n);
    x = x0;
    y = y0;
    h = (xn - x0) / n;
    printf("\nx0\ty0\tyn\n");
    while(x < xn)
    {
        k1 = h * (f(x0, y0));
        k2 = h * (f((x0 + h/2), (y0 + k1/2)));
        k3 = h * (f((x0 + h/2), (y0 + k2/2)));
        k4 = h * (f((x0 + h), (y0 + k3)));
        k = y0 + (k1 + 2*k2 + 2*k3 + k4) / 6;
        x = x + h;
        y = y + k*h;
        printf("\ny(%0.2f) = %0.3f", x, y);
    }
    
}
