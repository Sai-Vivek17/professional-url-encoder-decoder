// URL Encoder/Decoder - A professional C++ utility
// Author: [Your Name]
// License: MIT

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

// Check if character is safe (unreserved) for URLs
bool isUnreserved(char c) {
    return (isalnum(c) || c == '-' || c == '_' || c == '.' || c == '~');
}

// Encode a string into URL-safe format using percent-encoding
string urlEncode(const string &input) {
    stringstream encoded;

    for (char c : input) {
        if (isUnreserved(c)) {
            encoded << c;
        } else {
            encoded << '%' << uppercase << hex << setw(2) << setfill('0') << int((unsigned char)c);
        }
    }

    return encoded.str();
}

// Decode a percent-encoded URL string
string urlDecode(const string &input) {
    stringstream decoded;
    size_t len = input.length();

    for (size_t i = 0; i < len; ++i) {
        if (input[i] == '%' && i + 2 < len) {
            string hexVal = input.substr(i + 1, 2);
            char decodedChar = static_cast<char>(stoi(hexVal, nullptr, 16));
            decoded << decodedChar;
            i += 2;
        } else {
            decoded << input[i];
        }
    }

    return decoded.str();
}

// Display the menu and process user input
void runApp() {
    string text;
    int choice;

    cout << "\n=== URL Encoder / Decoder ===\n";
    cout << "1. Encode\n2. Decode\nEnter choice: ";
    cin >> choice;
    cin.ignore(); // Discard trailing newline

    cout << "Enter the string: ";
    getline(cin, text);

    if (choice == 1) {
        cout << "Encoded: " << urlEncode(text) << endl;
    } else if (choice == 2) {
        cout << "Decoded: " << urlDecode(text) << endl;
    } else {
        cout << "Invalid option.\n";
    }
}

int main() {
    runApp();
    return 0;
}
