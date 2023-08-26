#include<iostream>
#include<string>
using namespace std;

int getlength(char str[]){
    int i=0;
    int count = 0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
    char name[100];
    cin >> name;
    cout << getlength(name) << endl; 
}