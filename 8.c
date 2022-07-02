#include <stdio.h>
int or(int a,int b){
    if (a==0 && b==0)
    return 0;
    else
    return 1;
}
int main(){
    printf("A\tB\tAVB\n");
    for (int i = 0; i <=1; i++)
    {
        for (int j = 0; j <=1; j++)
        {
            printf("%d\t%d\t%d\n",i,j,or(i,j));
        }
        
    }   
    return 0;
}