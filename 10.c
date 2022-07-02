#include <stdio.h>
int LinearSearch(int a[],int pos,int r,int key)
{
    if(r<pos){
        return -pos;
    }
    if(a[pos]==key){
        return pos;
    }
    return LinearSearch(a,pos+1,r,key);
}
int main(){
    int n,a[50],key;
    printf("Enter the size of lists : ");
    scanf("%d",&n);
    printf("Enter elements of the lists : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key to be searched : ");
    scanf("%d",&key);
    int index=LinearSearch(a,0,n-1,key);
    if(index>-1){
        printf("Element %d is present at index %d",key,index);
    }
    else{
        printf("Element %d is not present",key);
    }
    return 0;
}