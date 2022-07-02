#include <stdio.h>

float min(float a,float b);
float max(float a,float b);


int main()
{
    float fa, fb, fi, fu, fac,fbc;
    float x = 1.0;
    printf("Enter membership function of first set : ");
    scanf("%f", &fa);
    printf("Enter membership function of second set : ");
    scanf("%f", &fb);
    fi=min(fa,fb);
    fu=max(fa,fb);
    fac=x-fa;
    fbc=x-fb;
    printf("The membership function of intersection = %0.1f\n",fi);
    printf("The membership function of union = %0.1f\n",fu);
    printf("The membership function of complement of first set = %0.1f\n",fac);
    printf("The membership function of complement of second set = %0.1f\n",fbc);
    return 0;

}

float min(float a,float b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

float max(float a,float b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}