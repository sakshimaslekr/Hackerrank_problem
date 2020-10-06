#include<stdio.h>
int main()
{
    int n,a[50];
    int i,b[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i++])
            b[i]=a[i];
    }
     for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    return 0;
}
