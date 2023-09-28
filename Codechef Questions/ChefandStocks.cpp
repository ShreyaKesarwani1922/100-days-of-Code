#include <iostream>
#include <climits>
using namespace std;

void inputArray(int a[],int size){
    for(int i=0;i<size;i++){
        cin >> a[i];
    }
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < 1; i++) {
 
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
 
        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
 

int main() {
	int t;
	cin >> t;
	
	while(t--){
	   int n;
	   cin >> n;
	   int a[n];
	   inputArray(a,n);
	   
	   selectionSort(a,n);
	   int sum = 0;
	   for(int i=1;i<n;i++){
	       sum+=a[i];
	   }
	   cout << sum << endl;
	}
	return 0;
}
