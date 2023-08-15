#include<iostream>
using namespace std;

void inputArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
}

int main(){
    int s,n;
    cin >> n >> s;
    int arr[n];

    inputArray(arr,n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if((arr[i] + arr[j]) == s){
                if(arr[i]<arr[j]){
                    cout << arr[i] << " " << arr[j] << endl;
                }
            }
        }
        
    }
    
}