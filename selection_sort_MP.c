#include<stdio.h>
#include<limits.h>
void selection_sort( int arr[], int n)
{
    
    for (int i=0; i<n-1 ; i++){
        int min = INT_MAX ;
        int minidx = -1;
    // for round i to n-1
           for (int j=i; j<=n-1; j++){

                if (min>arr[j]){
                    min = arr[j];
                    minidx = j ;
                }

                //swap the min and first element of unsorted element
                // swap minidex and i 
                int temp = arr [minidx];
                arr[minidx] = arr[i];
                 arr[i] = temp; 
                }

            }
    }   


int main(){
int n;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d integers:",n);
  for (int i = 0 ; i < n; i++){
      scanf("%d", &arr[i]) ;
    }


  selection_sort(arr, n);  
  printf("Sorted array: ");  
    for (int i = 0; i < n; i++) {  
    printf("%d ", arr[i]);  
  }  
  printf("\n");
  return 0;  

}
