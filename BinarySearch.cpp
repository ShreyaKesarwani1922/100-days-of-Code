#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    // int mid = (start+end)/2; 
    int mid = start + (end - start)/2;

    while(start<=end){
        if(key == arr[mid]){
        return mid;
        }

        //go to right part(key is greater than mid)
        if(key > arr[mid]){
            start = mid + 1;
        }

        //go to left part(key is smaller than mid)
        else{
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return -1;
    
}

int main(){
    int even[6] = {20,21,22,23,24,25};
    int odd[5] = {11,12,13,14,15};

    int EvenIndex = BinarySearch(even,6,21);
    int OddIndex = BinarySearch(odd,5,13);

    cout << "Index of 21 is: " << EvenIndex << endl;
    cout << "Index of 13 is: " << OddIndex << endl;
}