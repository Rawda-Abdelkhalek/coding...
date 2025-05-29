#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int low, int high, int guess)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        //check if x is present at mid 
        if (arr[mid]==guess)
          return mid;

        //if guess greater ,ignore left half
        if (arr[mid] < guess)
        low = mid +1;
        else 
        high = mid - 1; // BUG!  if  `low = mid - 1` when you choise first element
    }
//when return -1 the element was not present
    return -1;
}
int main (void)
{
    int arr[]={2,3,4,5,6};
    int guess =5;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr,0,n-1,guess);
    if (result == -1) cout <<"element is not present in array";
    else cout <<"element is present at index " << result << "\n";
    return 0;


}

