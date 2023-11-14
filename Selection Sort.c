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
void selectionsort(int*a,int n)
{
	int indexofmin,temp,i,j;
	printf("running selection sort......\n");
	for( i =0;i< n-1;i++)
	{
		indexofmin = i;
		for( j = i+1; j< n;j++)
		{
			if(a[j]<a[indexofmin]){
			
			indexofmin = j;
			
		}
	}
	temp = a[i];
	a[i] = a[indexofmin];
	a[indexofmin] = temp;
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


  selectionsort(arr, n);  
  printf("Sorted array: ");  
    for (int i = 0; i < n; i++) {  
    printf("%d ", arr[i]);  
  }  
  printf("\n");
	return 0;
}
