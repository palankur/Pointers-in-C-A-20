#include<stdio.h>                   //length of a string using pointer function
#include<string.h>
int length(char *p)
{
    int i;
    for(i=0;*(i+p);i++);
        return i-1;
}
int main()
{
    char a[40],*p,s;
    printf("Enter a string : ");
    fgets(a,40,stdin);
    s=length(a);
    printf("%d",s);
    return 0;
}
