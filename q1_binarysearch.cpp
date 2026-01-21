#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n, int k){
    int high=n-1;
    int low=0;

    while(low<=high){
        int mid = low+(high-low)/2;

        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {2,5,8,12,16,23,38,56,72,91};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << binarysearch(arr, n, 23);

    return 0;
}