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

void reverse(char str[]){
    int s = 0;
    int e = getlength(str) - 1;

    while(s<e){
        // swap(str[s++],str[e--]);
        swap(str[s],str[e]);
        s++;
        e--;
    }

    cout << str << endl;
}

bool checkPalindrome(char str[]){
    int s = 0;
    int e = getlength(str) - 1;
    bool flag = true;

    while(s<e){
        if(str[s]==str[e]){
            s++;
            e--;
        }
        else{
            flag = false;
            break;
        }
    }

    return flag;
}

int main(){
    char name[100];
    cin >> name;
    if(checkPalindrome(name) == 1){
        cout << "The given string is a palindrome." << endl;
    }
    else{
        cout << "The given string is not a palindrome." << endl;
    }
}