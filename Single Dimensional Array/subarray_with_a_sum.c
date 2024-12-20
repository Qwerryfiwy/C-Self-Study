#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Your code starts here
    int arr[]={1,2,3,4,5,6,7,8};
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    int k=9;
    for(int i=0;i<arr_len;i++){
        for(int j=1;j<arr_len;j++){
            if(arr[i]+arr[j]==k){
                printf("%d,%d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}