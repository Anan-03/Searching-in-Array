#include <stdio.h>  
int linearSearch(int arr[], int n, int target) 
{  
    for (int i = 0; i < n; i++) 
    {  
        if (arr[i] == target) 
        {  
            return i;   
        }  
    }  
    return -1; 
}  

int main() 
{  
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target; 
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);  

    if (result == -1) {  
        printf("Element not found\n");  
    } else {  
        printf("Element found at index %d\n", result);  
    }  

    return 0;  
}
