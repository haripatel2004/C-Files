# include <stdio.h>
int main ()
{
    int i,n,j;
    printf("enter the value of N");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
       j=i*i+i-1;
       printf("%d,",j);
       i=i+1;
    }
    return 0;
}