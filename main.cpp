#include <iostream>
using namespace std;


bool isPalindrome(int counter, string palindrome, int i ){
    if((palindrome[i] == palindrome[counter]) && i < counter ){
        counter --;
        i++;
        return isPalindrome(counter, palindrome, i);}

    else if(palindrome[i] != palindrome[counter]){
        return false;}
    else if(palindrome[i] == palindrome[counter] && i >= counter){
        return true;
    }
}
int main() {
    string palindrome ="";
    cout << "Please enter a string to check to see if it's a palindrome";
    getline(cin, palindrome);

    int length = palindrome.length();
    int counter = length-1;

    int i = 0;
    bool isPal = isPalindrome( counter,  palindrome,  i);
    if (isPal){
        cout << "This is a Palindrome!";
    }
    else
        cout << "This is not a palindrome.";
    return 0;
}

