#include <stdio.h>

int main() {
    int arr[]={20,19,22,25,23};
    int lowage=arr[0];
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(lowage>arr[i]){
            lowage=arr[i];
        }
    }
    printf("%d", lowage);
    return 0;
}
