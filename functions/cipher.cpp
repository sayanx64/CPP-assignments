#include <iostream>
#include <string>
using namespace std;

string cipherTextConverter(const string& text, int shift) {
    string result = "";

    for (char c : text) {
        if (c >= 'A' && c <= 'Z') { // Uppercase letters
            char newChar = (c - 'A' - shift + 26) % 26 + 'A';
            result += newChar;
        } else if (c >= 'a' && c <= 'z') { // Lowercase letters
            char newChar = (c - 'a' - shift + 26) % 26 + 'a';
            result += newChar;
        } else { // Non-alphabetic characters remain unchanged
            result += c;
        }
    }

    return result;
}

int main() {
    string inputText = "Prisha";
    int shift = 3; // Standard shift value
    string cipheredText = cipherTextConverter(inputText, shift);

    cout << "Original Text: " << inputText << endl;
    cout << "Ciphered Text: " << cipheredText << endl;

    return 0;
}
