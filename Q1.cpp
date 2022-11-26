#include<stdio.h>           //swapping of two numbers using pointer function
void swap(int *p,int *q)
{
    int s;
    s=*p;
    *p=*q;
    *q=s;
}
int main()
{
    int a,b;
    printf("Enter the numbers : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("The numbers after swapping are : %d & %d",a,b);
    return 0;
}
