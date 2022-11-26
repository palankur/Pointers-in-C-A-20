#include<stdio.h>                   //reverse of a array using pointer function
void reverse(int *p,int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
        printf("%d",*(p+i));
    }
}
int main()
{
    int a[3],i,size=0;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter %d  elements : ",size);
    for(i=0;i<size;i++){
    scanf("%d",&a[i]);
    }
    reverse(a,size);
    return 0;
}
