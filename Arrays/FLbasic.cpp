#include<iostream>
using namespace std;

void FirstAndLastOccurence(long arr[], long size, long x){
    long first = -1;
    long last = -1;
    for (long i = 0; i < size; i++)
    {
        if(arr[i] == x){
            first = i;
            break;
        }
    }
    int temp = first;
    while (arr[temp] == x)
    {
        last = temp;
        temp++;
    }

    // cout << "First Occurence of " << n << " is: " << first << endl;
    // cout << "Last Occurence of " << n << " is: " << last << endl;
    cout << first << " " << last << endl;
}
void inputArray(long arr[], long size){
    for (long i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
}

int main(){
    long size,x;
    cin >> size >> x;
    long arr[size];
    inputArray(arr,size);
    FirstAndLastOccurence(arr,size,x);
}