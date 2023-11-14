#include<stdio.h>
#include<stdlib.h>
void printarray(int*a,int n)
{
	for(int i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void insertionsort(int *a,int n)
{
	int key, j;
	for(int i = 1;i<=n-1;i++)
	{
		key = a[i];
		j = i -1;
		while(j>=0 && a[j]>key)
		{
			a[j +1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}
int main()
{
	
			int n;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d integers:",n);
  for (int i = 0 ; i < n; i++){
      scanf("%d", &arr[i]) ;
    }


 insertionsort(arr, n);  
  printf("Sorted array: ");  
    for (int i = 0; i < n; i++) {  
    printf("%d ", arr[i]);  
  }  
  printf("\n");
	return 0;
}
