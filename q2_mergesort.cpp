#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    int i=left;
    int j=mid+1;
    int k=0;
    int temp[right-left+1];
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(i=left,k=0;i<=right;i++,k++){
        arr[i]=temp[k];
    }
}
void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr1[] = {12,11,13,5,6,7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {38,27,43,3,9,82,10};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    mergesort(arr1, 0, n1 - 1);
    mergesort(arr2, 0, n2 - 1);

    cout << "Sorted arr1: ";
    printarray(arr1, n1);

    cout << "Sorted arr2: ";
    printarray(arr2, n2);

    return 0;
}