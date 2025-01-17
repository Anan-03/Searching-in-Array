#include <stdio.h>
int binarySearch(int arr[], int left, int right, int target) 
{  
    while (left <= right) 
    {  
        int mid = left + (right - left) / 2;  

        if (arr[mid] == target) {  
            return mid; 
        }  

        if (arr[mid] < target) {  
            left = mid + 1;  
        } else {  
            right = mid - 1;  
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
    printf("Enter the elements of the array (sorted in ascending order):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target; 
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n - 1, target);  
    if (result == -1) {  
        printf("Element not found\n");  
    } else {  
        printf("Element found at index %d\n", result);  
    }  
    return 0;  
}
