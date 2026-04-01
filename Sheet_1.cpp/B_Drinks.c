#include<stdio.h>
int main()
{
    int n,sum=0;
    float avg;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter n element of array: ");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    printf("Sum is : ");
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    avg=sum/n;
    printf("%f",avg);
    return 0;
}