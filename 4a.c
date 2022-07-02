#include <stdio.h>

int gcd(int a,int b){
    if(a==0)
    return b;
    else{
        return gcd(b%a,a);
    }
} 

int main(){
    int a,b,g;
    printf("Enter numbers :\n");
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    printf("The gcd of %d and %d is %d.",a,b,g);
    return 0;
}
