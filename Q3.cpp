#include<stdio.h>                           //sorting of array in ascending order using pointer function
void sort(int *p, int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i;j<size;j++)
        {
            if(p[j]<p[i])
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}
int main()
{
    int size,i,a[20];
    printf("Enter the array size : ");
    scanf("%d",&size);
    printf("Enter %d numbers : ",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    sort(a,size);
    for(i=0;i<size;i++)
        printf("%d",a[i]);
    return 0;
}
