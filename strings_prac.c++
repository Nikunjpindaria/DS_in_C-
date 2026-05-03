// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    string str1="Hello98";
    string str2="World";
    //access string elements
    str1[0]='h';
    // cant assign string 
    // str2[0]="x" -->wrong
    str1.size(); // gives size of string  
    getline(cin,str1); // to take input with space
    int last_digit= str1[str1.size()-1] - '0'; // to convert char to int
    //string comarision
    if(str1==str2){
        cout << "Strings are equal";
    }
    else{
        cout << "Strings are not equal";
    }

    cout << "Try programiz.pro";

    return 0;
}