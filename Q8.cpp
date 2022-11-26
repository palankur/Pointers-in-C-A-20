#include<stdio.h>               //sum of numbers of an array using pointer function
void sum(int *p,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum = sum + *(p+i);
    }
    printf("Sum is : %d",sum);
}
int main()
{
    int a[20],size,i,*p;
    p=&a[0];
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter %d numbers : ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",p+i);
    }
    sum(p,size);
    return 0;

}
