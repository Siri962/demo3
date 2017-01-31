#include<stdio.h>
#include</home/saisri/head.h> 
extern int bubble_sort(int a[],int c);
void main()
{
printf("\n enter n value:");
scanf("%d",&n);
printf("\n enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
bubble_sort(arr,n);
printf("\n sorted elements are:");
for(i=0;i<n;i++)
{
printf("\t%d",arr[i]);
}
printf("\n");
}

