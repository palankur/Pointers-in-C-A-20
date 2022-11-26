#include<stdio.h>                       //swapping of a string using pointers
#include<string.h>
void swap(char **p,char **q)
{
    char *temp;
    temp=*p;
    *p=*q;
    *q=temp;

}
int main()
{
    char a[20],b[20],*p,*q;
    p=&a[0];
    q=&b[0];
    printf("Enter first & second string : ");
    gets(a);
    gets(b);
    swap(&p,&q);
    printf("The new strings is : %s %s",p,q);
    return 0;
}
