#include<iostream>
using namespace std;

// Palindrome check without considering capitalisation

bool isLower(char ch){
    if((ch>='a') && (ch<'z')){
        return true;
    }
    else{
        return false;
    }
}

bool isUpper(char ch){
    if( (ch>='A') && (ch<'Z') ){
        return true;
    }
    else{
        return false;
    }
}

char Lower(char ch){
    if((ch>='a') && (ch<'z')){
        return ch;
    }
    else{
        ch = ch - 'A' + 'a';
        return ch;
    }
}

char Upper(char ch){
    if( (ch>='A') && (ch<'Z') ){
        return ch;
    }
    else{
        ch = ch - 'a' + 'A';
        return ch;
    }
}

int getlength(char str[]){
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

bool isPalindrome(char str[]){
    int s = 0;
    int e = getlength(str) - 1;

    while(s<e){
        if(Lower(str[s]) != Lower(str[e])){
            return false;
        }
        else{
            
        }
    }

    return true;
}

int main(){
    char name[100];
    cout << "Enter the string: " << endl;
    cin >> name;
    
    if(isPalindrome(name) == true){
        cout << name << " is a Palindrome." << endl;
    }
    else{
        cout << name << " is not a Palindrome." << endl;
    }
}