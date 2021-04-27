/*
Letter Count
Name
Date
This program should implement a function
that counts the number of times a letter appears
within a sentence. However, the function is missing.
Write the function so that the program works as
intended.
*/
#include <iostream>
#include <string>
using namespace std;

// Write your function here!

// You do not need to do anything with the main()!
int main()
{
    char letter;
    string sentence;
    cout << "Enter a sentence >> ";
    cin.clear();
    getline(cin, sentence);
    cout << "Enter the letter you want to count >> ";
    cin >> letter;
    cout << "The letter " << letter << " appears " 
        << countLetter(sentence, letter) << " times.\n";
    return 0;
}
