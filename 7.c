#include <stdio.h>
int and(int a,int b){
    if (a==1 && b==1)
    return 1;
    else
    return 0;
}
int main(){
    printf("A\tB\tA^B\n");
    for (int i = 0; i <=1; i++)
    {
        for (int j = 0; j <=1; j++)
        {
            printf("%d\t%d\t%d\n",i,j,and(i,j));
        }
        
    }   
    return 0;
}