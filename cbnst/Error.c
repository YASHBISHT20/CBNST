#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    printf("Enter the number : ");
    scanf("%f", &x);
    printf("Enter your choice \n1 - Truncate\n2 - Round off\n");
    int ch;
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
        int y = (int)(x * 10000);
        float z = (float)y / 10000;
        printf("Truncate value is : %f\n", z);
        break;
    }
    case 2:
    {
        int y = (int)(x * 100000);
        int temp = y % 10;
        y = y / 10;
        if (temp > 5)
        {
            float z = (float)y / 10000;
            z += 0.0001;
            printf("Round off value is : %f\n", z);
        }
        else
        {
            float z = (float)y / 10000;
            printf("Round off value is : %f\n", z);
        }

        break;
    }
    }
    return 0;
}
