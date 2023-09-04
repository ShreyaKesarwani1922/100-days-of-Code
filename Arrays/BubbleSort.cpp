#include<iostream>
using namespace std;


int getMax(int a[], int size)
{
    int max = INT_MIN;


    for (int i = 0; i < size; i++)
    {
        if(a[i]>max)
        {
            max = i;
        }
    }
    
    return max;
}

void printArray(int a[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
}

void BubbleSort(int a[], int size){

    int n = size;
    cout << n << endl;
    while(n>1){
        for (int i = 0; i < size ; i++)
        {
            if(a[i] > a[i+1] && (i+1 < size)){
                swap(a[i],a[i+1]);
            }
            // printArray(a,5);
        }
        n--;
        printArray(a,5);
        cout << "Number of elements in unsorted part: " << n << endl;
    }
    
    
    // printArray(a,5);
    
}

int main(){
    
    int arr[5] = {12, 65, 32, 11, 1};
    BubbleSort(arr,5);
    printArray(arr,5);
}