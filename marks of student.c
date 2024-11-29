#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the marks of student subject %d = :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){

    if(arr[i]<35)
    printf("Roll No %d\n",i);
    
    }

    
    return 0;

}