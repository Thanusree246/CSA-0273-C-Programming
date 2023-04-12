#include<stdio.h>
int main()
{
	int arr[20], min, max, n, i;
printf("\n Enter the number of elements in array: ");
scanf("%d",&n);
printf("\n Enter Elements of array: \n");
for(i=0; i<n; i++)
scanf("%d", &arr[i]);
	
printf("\n Elements of array: ");
for(i=0; i<n; i++)
printf("%d ", arr[i]);
min=max=arr[0];
for(i=0; i<n; i++)
{
    if(arr[i]>max)
    max=arr[i];
    if(arr[i]<min)
	min=arr[i];
}
printf("\n smallest Element of Array: %d", min);
printf("\n Largest Element of Array: %d", max);
return 0;
}
