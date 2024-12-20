#include <stdio.h>
#include <stdlib.h>

void sort_descending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {7, 1, 3, 2, 4, 9, 6, 5, 0, 8};
    int k;
    
    printf("Enter k for kth largest element: ");
    scanf("%d", &k);
    
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    
    // Sort array in descending order
    sort_descending(arr, arr_len);

    if(k==1){
        printf("The %dst largest element is: %d\n", k, arr[k-1]);
    }
    else if(k==1){
        printf("The %dst largest element is: %d\n", k, arr[k-1]);
    }
    else if(k==2){
        printf("The %dnd largest element is: %d\n", k, arr[k-1]);
    }
    else if(k==3){
        printf("The %drd largest element is: %d\n", k, arr[k-1]);
    }
    else if (k > 3 && k <= arr_len) {
        printf("The %dth largest element is: %d\n", k, arr[k-1]);
    } else {
        printf("Invalid input: k is out of range\n");
    }

    return 0;
}
