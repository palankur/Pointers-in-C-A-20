#include<stdio.h>           //reverse of a string using pointer function
#include<string.h>
void reverse(char *p,int l)
{
    int i;
    for(i=l;i>=0;i--){
        printf("%c",*(p+i));
    }
}
int main()
{
    char a[20];
    int l;
    printf("Enter the string : ");
    fgets(a,20,stdin);
    l=strlen(a);
    reverse(a,l);
    return 0;
}
