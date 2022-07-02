#include <stdio.h>
int main()
{
    long a, b;
    int sum[20], count=0, i = 0, c = 0;
    printf("Enter first number : ");
    scanf("%ld",&a);
    printf("Enter second number : ");
    scanf("%ld",&b);
    while (a != 0 || b != 0)
    {
        int temp = (a % 10) + (b % 10) + c;
        if (temp == 3)
        {
            c = 1;
            sum[i] = 1;
        }
        else if (temp == 2)
        {
            c = 1;
            sum[i] = 0;
        }
        else
        {
            c=0;
            sum[i] = temp;
        }
        
        a = a / 10;
        b = b / 10;
        // printf("%d\t", sum[i]);
        i++;
        count++;
    }
    sum[i] = c;
    // printf("%d\t", sum[i]);
    // printf("Count is %d\n",count);

    //displaying result
    printf("The required result is ");
    for (int j = count; j >=0; j--)
    {
        printf("%d",sum[j]);
    }
    
    return 0;
}