#include<iostream>
using namespace std;

// int getMin(int a[], int size)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if(a[i] < min)
//         {
//             min = a[i];
//         }
//     }

//     return min;
    
// }


void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i+1; j < size ; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min],arr[i]);
        
        
    }
    
}

int main(){
    int arr[5] = {64,25,12,22,11};
    int arr1[5] = {6,2,8,4,1};
    selectionSort(arr,5);
    selectionSort(arr1,5);
    printArray(arr,5);
    printArray(arr1,5);
}