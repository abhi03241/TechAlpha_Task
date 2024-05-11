/*
    Write a Program to Remove Spaces From a String
*/

#include <iostream>
#include <string>

using namespace std;

string removeSpaces(string str) {
    string result;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            result.push_back(str[i]);
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string with spaces: ";
    getline(cin, input);

    string result = removeSpaces(input);

    cout << "String after removing spaces: " << result << endl;

    return 0;
}
