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
	int a[] = {9,1,4,14,4,15,6};
//	int a[] = {1, 2, 3, 4, 5, 6};
	int n = 7;
	printarray(a , n);
    selectionsort(a ,n);


	printarray(a , n);

	return 0;
}
