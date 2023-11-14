#include<stdio.h>
void bubble_sort( int arr[], int n)
{
    
    for (int i=1; i<n ; i++){
    // for round 1 to n-i
           for (int j=0; j<n-i; j++){

                if (arr[j]>arr[j+1]){
                //swap(arr[j],arr[j+1]);
                int temp = arr [j];
                arr[j] = arr[j+1];
                 arr[j+1] = temp; 
                }

            }
    }   
}

// main function 

int main() {  
int n;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d integers:",n);
  for (int i = 0 ; i < n; i++){
      scanf("%d", &arr[i]) ;
    }


  bubble_sort(arr, n);  
  printf("Sorted array: ");  
    for (int i = 0; i < n; i++) {  
    printf("%d ", arr[i]);  
  }  
  printf("\n");
  return 0;  
}  
