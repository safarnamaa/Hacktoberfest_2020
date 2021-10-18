//	Gauss-Seidel Method

#include <stdio.h>
#include <conio.h>
#define abs(x) (x > 0 ? x : -x)

int main()
{
    float a[10][10], b[10], x[10], sum = 0;
    int n, i, j, k;
    //clrscr();
    printf("\nEnter number of equations: ");
    scanf("%d", &n);

I:
    printf("\nEnter A Matrix nxn:\n");
    for (i = 0; i < n; i++)
    {
        x[i] = 0;
        for (j = 0; j < n; j++)
        {
            printf("a%d%d:  ", i, j);
            scanf("%f", &a[i][j]);
            if (i != j)
                sum += abs(a[i][j]);
        }
        if (sum > abs(a[i][i]))
        {
            printf("\nEnter A Matrix again:");
            sum = 0;
            goto I;
        }
        sum = 0;
    }
    printf("\nEnter B matrix: ");
    for (i = 0; i < n; i++)
        scanf("%f", &b[i]);

    for (k = 0; k < 20; k++)
    {
        for (i = 0; i < n; i++)
        {
            x[i] = b[i];
            for (j = 0; j < n; j++)
            {
                if (i != j)
                    x[i] -= a[i][j] * x[j];
            }
            x[i] /= a[i][i];
            printf("%f ", x[i]);
        }
        printf("\n");
    }

    getch();
}
