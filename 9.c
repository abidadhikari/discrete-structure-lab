#include <stdio.h>
char implication(char p, char q)
{
    if (p == 'T' && q == 'F')
        return 'F';
    else
        return 'T';
}
int main()
{
      printf("P\tQ\tP->Q\n");
    for (int i = 0; i <=1; i++)
    {
        for (int j = 0; j <=1; j++)
        {
            printf("%c\t%c\t%c\n",(i==0?'F':'T'),(j==0?'F':'T'),implication(i==0?'F':'T',j==0?'F':'T'));
        }
        
    }   
    return 0;
}