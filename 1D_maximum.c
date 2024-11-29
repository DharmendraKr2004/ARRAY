#include<stdio.h>
int main()
{
    int n,i,max;
    printf("enter the values:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf(" enter the %dth element:",i+1);
        scanf("%d",&a[i]);
    
    }
    max=a[0];
    for (i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];

        }
        printf("max = %d",max);  
        return 0;
    }
    
}
