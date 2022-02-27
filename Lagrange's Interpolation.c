#include <stdio.h>

int main()
{
    int i, j, n;
    float p, xp, yp = 0;
    float x[10], y[10];
    printf("Enter no of datas: ");
    scanf("%d", &n);
    printf("Enter datas:\n");
    for(i = 1; i <= n; i++)
    {
        printf("x[%d] = ", i);
		scanf("%f", &x[i]);
		printf("y[%d] = ", i);
		scanf("%f", &y[i]);
    }
    printf("Enter interpolation point(xp): ");
    scanf("%f", &xp);

    for(i = 1; i <= n; i++)
    {
        p = 1;
        for(j = 1 ; j <= n; j++)
        {
            if(i != j)
                p = p * (xp -  x[j])/(x[i] - x[j]);
        }
        yp = yp + (p * y[i]);
    }

    printf("The result is: %f", yp);
}
