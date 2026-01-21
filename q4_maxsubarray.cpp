#include <bits/stdc++.h>
using namespace std;

int maxsubarraysum(int arr[], int n) {
    int maxsofar = arr[0];
    int sum = arr[0];

    for (int i=1; i<n; i++) {
        sum = max(arr[i], sum+arr[i]);
        maxsofar = max(maxsofar, sum);
    }

    return maxsofar;
}

int main() {
    int arr[] = {-2,-5,6,-2,-3,1,5,-6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = maxsubarraysum(arr, n);

    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}
