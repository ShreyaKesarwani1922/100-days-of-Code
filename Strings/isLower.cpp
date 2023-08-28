#include<iostream>
using namespace std;

char toLower(char ch){

    if((ch >= 'a') && (ch <= 'z')){
        return ch;
    }
    else{
        ch = ch - 'A' + 'a';

        /* Example:
            ch = 'B';
            then,
                'B' - 'A' = 1.  //because B has +1 ASCII value than A
            and 1 + 'a' = 'b'   //Adding the diff to 'a' would generate the lower case of given value of ch

        */
        return ch;
    }
}


int main(){
    // char one = 'B';
    // char two = 'b';

    // cout << "Lower case of " << one << " = " << isLower(one) << endl;
    // cout << "Lower case of " << two << " = " << isLower(two) << endl;
    
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0' ; i++)
    {
        str[i] = toLower(str[i]);
    }

    cout << str;

}