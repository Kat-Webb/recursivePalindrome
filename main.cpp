#include <iostream>
using namespace std;


bool palindrome1(int counter, string palindrome, int i ){
    if((palindrome[i] == palindrome[counter]) && i < counter ){
        counter --;
        i++;
        palindrome1(counter, palindrome, i);}
    else if(palindrome[i] != palindrome[counter]){
        cout << "This is not a palindrome.";}
    else if(palindrome[i] == palindrome[counter] && i >= counter){
        cout << "This is a palindrome!";
    }
};
int main() {
    string palindrome ="";
    cout << "Please enter a string to check to see if it's a palindrome";
    getline(cin, palindrome);

    int length = palindrome.length();
    int counter = length-1;

    int i = 0;
    palindrome1( counter,  palindrome,  i);
    return 0;
}
