#include<stdio.h>
int reverse(int arr[],int n);
void print(int arr[],int n);

int main(){
    int pr[]={1,2,3,4,5,6};
    
    
    reverse(pr,6);
    print(pr,6);
    
    
    
    
    
    return 0;
}

int reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}