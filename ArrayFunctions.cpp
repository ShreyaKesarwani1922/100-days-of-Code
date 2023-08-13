#include<iostream>
using namespace std;

// function for taking input in an array
void inputArray(int a[], int size){
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    
}

// function for printing elements of an array
void printArray(int a[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// function for getting sum of elements of an array
int sumArray(int a[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int main()
{
    
    int n;      // n = size of the array
    cin >> n;   // taking input for n
    int a[n];   // initialising array a[]

    inputArray(a,n);
    printArray(a,n);
    cout << sumArray(a,n) << endl;

}