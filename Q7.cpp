#include<stdio.h>                   //number of vowels and consonants in a given string using pointers
#include<string.h>
void vowcon(char *p,int l)
{
    int i,count=0,con=0;
    for(i=0;i<l;i++)
    {
        if(p[i]>=65 && p[i]<=97 || p[i]>=97 && p[i]<=122)
        {
            if(p[i]=='a' ||p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u')
            count++;
        else
        con++;
        }
    }
    printf("The given string has ");
    printf("\nVowels : %d",count);
    printf("\nConsonants : %d",con);
}
int main()
{
    char a[100],*p;
    int l;
    printf("Enter a string : ");
    gets(a);
    l=strlen(a);
    vowcon(a,l);
    return 0;
}
