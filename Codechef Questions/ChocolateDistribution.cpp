#include <iostream>
using namespace std;

int sum(int arr[], int size) {
  
  if (size == 0)
    return 0;
    
  return arr[size - 1] + sum(arr, size - 1);
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	   int n,a[3] = {0,0,0};
	   cin >> n;
	   
	   while(sum(a,3)!=n){
	       for(int i=0; i<n; i++){
	           a[i] += 1;
	           if(sum(a,3)==n){
	               break;
	           }
	       }
	   }
	   printArray(a,3);
	   
	}
	return 0;
}
