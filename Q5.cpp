#include<stdio.h>
void large(int *p,int *q)
{
    int *max;
    if(*p>*q)
        printf("Larger number is : %d",*p);
    else
        printf("Larger number is : %d",*q);
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    large(&a,&b);
    return 0;
}
