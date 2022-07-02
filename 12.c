#include <stdio.h>

int fact(int a)
{
    if (a == 0 || a == 1)
        return 1;
    else
        return a * fact(a - 1);
}

float permutation(int n, int r)
{
    return (fact(n)/fact(n-r));
}

float combination(int n,int r){
    return (fact(n)/(fact(n-r)*fact(r)));
}

int main()
{
    int n, r;
    printf("Enter total number of objects : ");
    scanf("%d", &n);
    printf("Enter required number of objects : ");
    scanf("%d", &r);
    float p = permutation(n, r);
    float c = combination(n, r);
    printf("Factorial is %0.2f\n",p);
    printf("Combination is %0.2f\n",c);

    return 0;
}