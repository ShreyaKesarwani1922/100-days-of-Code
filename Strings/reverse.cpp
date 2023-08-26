#include<iostream>
#include<string>
using namespace std;

// input: POBHAT
// output: TAHBOP

int getlength(char str[]){
    int i=0;
    int count = 0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

// void reverse(char str[]){
//     int s = 0;
//     int e = getlength(str) - 1;

//     while(s<e){
//         // swap(str[s++],str[e--]);
//         swap(str[s],str[e]);
//         s++;
//         e--;
//     }

//     cout << str << endl;
// }

void reverse(char str[]){
    int s = 0;
    int e = getlength(str) - 1;

    while(s<e){
        // swap(str[s++],str[e--]);
        // swap(str[s],str[e]);
        char temp;
        temp = str[s];
        str[s] = str[e];
        str[e] = temp;

        s++;
        e--;
    }

    cout << str << endl;
}

int main(){
    char name[100];
    cin >> name;
    reverse(name);
}