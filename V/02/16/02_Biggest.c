#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num0,num1,num2;
    scanf("%f",&num0);
    scanf("%f",&num1);
    scanf("%f",&num2);
    if (num0>=num1)
    {
        if (num0>=num2)
        {
            printf("%f",num0);
        }else
        {
            printf("%f",num2);
        }

    }
    else if (num1>=num2)
    {
        printf("%f",num1);
    }
    else
    {
        printf("%f",num2);
    }
    return 0;
}

