#include <iostream>
#include <string>
#include <cctype>

// TODO: add a mechanism of non-going beyond the printable characters of ASCII
char getEncryptedASCIISymbol(unsigned char symbol, const int shift) {
    int symbolCode = int (symbol) + shift;
    while(!isprint (symbolCode)) {
        symbolCode += shift;
    }
    return char (symbolCode);
}

int main (int argc, char const *argv[]) {
    std::string input;
    int shift;
    bool method;

    while (std::cout << "Enter the size of shift (positive integer): " && !(std::cin >> shift)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Please, enter a number according to the instruction!\n";
    }
    shift = (shift < 0) ? -shift : shift;

    while (std::cout << "Choice the operation (1 - encrypt, 0 - decrypt): " && !(std::cin >> method)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Please, enter a digit according to the instruction!\n";
    }
    shift = method ? shift : -shift;

    std::cout << "Enter the text: ";
    std::cin.ignore();
    getline(std::cin, input);

    const int inputSize = input.size();
    for (int i = 0; i < inputSize; i++) {
        if (isalpha (int (input[i]))) {
            input[i] = getEncryptedASCIISymbol(input[i], shift);
        }
    }
    std::cout << (method ? "Encypted" : "Decrypted") << " text: " << input << '\n';
    return 0;
}
