#include <stdio.h>

int main() {
    int arr[]={20,19,22,25,23};
    float avg,sum=0;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        sum+=arr[i];
    }
    avg=sum/length;
    printf("%.2f",avg);
}
