#include<stdio.h>                   //demonstration of handling a pointer
int main()
{
    int x,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("%d %d %d %d",&x,p,*&x,x);
    printf("\n%d %d %d %d",*p,&p,&r,&q);
    printf("\n%d %d %d %d",**q,***r,**r,*q);
    printf("\n%d %d %d %d",**&p,**&r,&*p,&*q);
    printf("\n%d %d %d %d",q,r,*&r,*r);
    return 0;
}
