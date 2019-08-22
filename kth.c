#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10],i,n,k,min_index,j,temp;
printf("enter the number of elements: ");
scanf("%d",&n);
printf("enter the  elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);



for(i=0;i<n-1;i++)
{
	min_index=i;
	for(j=i+1;j<n;j++)
		{
		  if(a[j]<a[min_index])
			{
			min_index=j;
		
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}
   }
printf("sorted elements:");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
printf("\nenter the kth element: ");
scanf(" %d ",&k);
printf("\nis the element of array: %d  ",a[k-1]);
}

/*enter the number of elements:5
enter the  elements:10
5
-1
0
-3
sorted elements:-3 -1 0 5 10
enter the kth element: 2 
value is the smallest element of k: -1
*/

