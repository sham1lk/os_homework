#include <stdio.h>
void swap(int *xp, int *yp) 
{  
    
} 
  
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)         
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]){
              
              int temp = arr[j]; 
              arr[j]=arr[j+1];
              arr[j+1]=temp; 

              } 
} 
   
int main() 
{ 
    int n;
    scanf("%d ", &n);
    int arr[n];
    for (int i = 0;i<n;i++)
      scanf("%d", &arr[i]);
    bubbleSort(arr, n); 
    printf("\n"); 
    for (int i=0; i < n; i++) 
        printf("%d ", arr[i]);  
} 